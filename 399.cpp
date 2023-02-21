#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<long long int> v;

        while(n){
            v.push_back(n);
            std::cin >> n;
        }   

        std::sort(v.begin(), v.end());

        auto i = 0;
        auto valid = true;
        if(v.size() > 1){
            while(i < v.size() - 1 && valid){
            if(v[i] != v[i + 1])
                valid = false;
            i += 2;
            }

            if(v[v.size() - 1] <= v[v.size() - 2])
            valid = false;
        }
        
        if(valid){

            for(int j = 0; j < v.size(); j = j + 2){
                std::cout << v[j];
                    if(j < v.size() - 1)
                        std::cout << " ";
            }

            for(int j = v.size() - 2; j >= 0 ; j = j - 2){
                if(j > 0)
                    std::cout << " ";
                std::cout << v[j];
            }

        }else{
            std::cout << "NO";
        }

        std::cout << "\n";
        std::cin >> n;
    }

    return 0;
}