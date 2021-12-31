#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int h, m;
    char aux;

    std::cin >> h >> aux >> m;

    while (h || m) {

        std::cout << 24 * 60 - (h * 60 + m) << "\n";

        std::cin >> h >> aux >> m;
    }
}