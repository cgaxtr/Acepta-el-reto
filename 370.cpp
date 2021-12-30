#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int c, a, b;
    char aux;
    std::cin >> c;

    for (auto i = 0; i < c; i++) {
        std::cin >> a >> aux >> b;
        auto min = std::min(a, b);
        auto max = std::max(a, b);

        std::cout << (min % 2 == 0 && max == min + 1 ? "SI" : "NO") << std::endl;
    }
}
