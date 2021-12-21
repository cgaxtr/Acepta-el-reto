#include <iostream>

int main(){
    int c, n;

    std::cin >> c;

    for(auto i = 0; i < c; i++){
        std::cin >> n;

        if(n == 0 || n == 1)
            std::cout << 1 << std::endl;
        else if (n == 3)
            std::cout << 6 << std::endl;
        else if(n > 4)
            std::cout << 0 << std::endl;
        else
            std::cout << n << std::endl;
    }

    return 0;
}