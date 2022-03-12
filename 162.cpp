#include <iostream>
#include <iomanip>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    char c;
    std::cin >> n >> c;

    while(n != 0){
    
        std::cout << "|";
        std::cout << std::setw(8*n) << std::setfill('-') << "";
        std::cout << "|\n";

        bool black = false;
        for(auto i = 1; i <= 8*n; i++){
            std::cout << "|";
            for(auto j = 0; j < 8; j++){
                if(black)
                    std::cout << std::setw(n) << std::setfill(c) << "";
                else
                    std::cout << std::setw(n) << std::setfill(' ') << "";
                black ^= true;
            }
            if(i % n == 0){
                black ^= true;
            }

            std::cout << "|\n";
        }

        std::cout << "|";
        std::cout << std::setw(8*n) << std::setfill('-') << "";
        std::cout << "|\n";

        std::cin >> n >> c;
    }

    return 0;
}