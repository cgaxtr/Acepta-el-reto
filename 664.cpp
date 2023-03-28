#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, c, aux;
    std::cin >> n;
    while(n){
        auto minMax = 801;
        for(auto i = 0; i < n; i++){
            std::cin >> c;
            
            auto tempMax = 0;
            for(auto j = 0; j < c; j++){
                std::cin >> aux;
                tempMax = std::max(tempMax, aux);
            }

            minMax = std::min(minMax, tempMax);
            
        }
        
        std::cout << minMax << "\n";
        std::cin >> n;
    }

    return 0;
}