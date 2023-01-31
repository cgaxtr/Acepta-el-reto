#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c, n, m;
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        std::cin >> n >> m;

        std::cout << (n + 1) * m + (m + 1) * n << "\n";

    }

    return 0;
}