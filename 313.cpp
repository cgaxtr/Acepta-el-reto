#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, a, b;
    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;

        std::cout << (a + b >= 0 ? "SI" : "NO") << "\n";
    }
}

