#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    while (std::stoi(s) >= 0) {
        bool isOden = true;
        int i = 0;

        while (i < s.length() && isOden) {
            if ((s[i] - '0') % 2)
                isOden = false;
            i++;
        }

        std::cout << (isOden ? "SI\n" : "NO\n");
        std::cin >> s;
    }
}