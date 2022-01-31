#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n && n){
        std::vector<int> v;
        int aux;

        while(n--){
            std::cin >> aux;
            v.push_back(aux);
        }

        int count = 0;
        int max = 0;
        for (int i = v.size() - 1; i >= 0; i--){
            if(v[i] > max){
                count++;
                max = v[i];
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}