#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int c;
    std::string s;

    std::cin >> c;

    for (auto i = 0; i < c; i++) {
        std::cin >> s >> s;
        std::cout << "Hola, " << s << ".\n";
    }
}
