#include <iostream>

int main(){

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int g, p;
    for (auto i = 0; i < n; i++) {
        std::cin >> g >> p;
        std::cout << (g / p >= 12 ? "SI\n" : "NO\n");
    }

    return 0;
}