#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::cout << (n * (n+1)) / 2 * 3 << "\n";
        std::cin >> n;
    }

    return 0;
}