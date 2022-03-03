#include <iostream>

int main(){

    std::iostream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int b, h;

    std::cin >> b >> h;
    while(h >= 0 && b >= 0){

        std::cout << 2*b + 2*h << "\n";
        std::cin >> b >> h;
    }

    return 0;
}