#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    
    std::cin >>n;
    while(n != 0){
        std::cout << (n % 2 ? "IZQUIERDA\n" : "DERECHA\n");
        std::cin >>n;
    }

    return 0;
}