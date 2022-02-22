#include <unordered_map>
#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::unordered_map<std::string, int> k; 
    std::string s;

    while(n != 0){
        k.clear();

        for(auto i = 0; i < n; i++){
            std::cin >> s;
            k[s]++;
        }
        
        std::cin >> n;

        for(auto i = 0; i < n; i++){
            std::cin >> s;

            std::cout << k[s] + 1 << "\n";
            k[s]++;
        }

        std::cout << "\n";
        std::cin >> n;
    }

    return 0;
}