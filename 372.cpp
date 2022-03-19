#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(false);
    int c; //cases
    std::string str;

    std::cin >> c;
    while (c--) {
        std::cin >> str;

        for (int i = str.length() - 1; i >= 0; i--) {

            auto t = isupper(str[str.length() - 1 - i]);
            char c;
            if (t)
                c = toupper(str[i]);
            else
                c = tolower(str[i]);

            std::cout << c;
        }

        std::cout <<  std::endl;
    }
}