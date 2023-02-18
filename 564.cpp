#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long int n, k;
    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        std::cin >> k;
        std::cout << k / 3 << "\n";
    }
    
    return 0;
}
