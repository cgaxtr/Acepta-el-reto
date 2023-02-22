#include <iostream>
#include <vector>
#include <unordered_set>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        std::vector<std::vector<int>> ma(9, std::vector<int>(9));
        std::vector<int> r(9);
        std::vector<int> c(9);

        for(auto j = 0; j < 9; j++){
            for(auto k = 0; k < 9; k++){
                std::cin >> ma[j][k];
                r[j] +=  ma[j][k];
                c[k] +=  ma[j][k];
            }
        }

        //check rows
        auto valid = true;
        auto j = 0;
        while(valid && j < 9){
            valid = 45 == r[j];
            ++j;
        }

        //check rows
        j = 0;
        while(valid && j < 9){
            valid = 45 == c[j];
            ++j;
        }


        j = 0;
        auto k = 0;
        auto l = 0;
        auto m = 0;

        std::unordered_set<int> s;
        while(j < 9 && valid){
            while(k < 9 && valid){
                
                while(l < 3 && valid){
                    while(m < 3 && valid){
                        s.insert(ma[j + l][k + m]);
                        ++m;
                    }
                    m = 0;
                    ++l;
                }
                valid = s.size() == 9;
                s.clear();
                m = 0;
                l = 0;
                k += 3;
            }
            k = 0;
            j += 3;
        }

        std::cout << (valid ? "SI\n" : "NO\n");
    }

    return 0;
}