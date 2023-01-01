#include <iostream>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, y;
    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        std::cin >> y;

        std::cout << (y > 0 ? y - 1 : y) << "\n";
    }

    return 0;
}
