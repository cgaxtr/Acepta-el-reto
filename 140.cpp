#include <iostream>
#include <string>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    while (s[0] != '-') {

        int sum = 0;
        for (size_t i = 0; i < s.length(); i++) {
            sum += s[i] - '0';

            std::cout << s[i];
            if(i != s.length() - 1)
                std::cout << " + ";
        }

        std::cout << " = " << sum << '\n';
        std::cin >> s;
    }

    return 0;
}