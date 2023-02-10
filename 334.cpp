#include <iostream>
#include <string>
#include <unordered_map>

int main() {

    std::unordered_map<std::string, std::string> m = {
        {"IX","GALO"},
        {"US","ROMANO"},
        {"UM","ROMANO"},
        {"IC","GODO"},
        {"AS","GRIEGO"},
        {"AF","NORMANDO"},
        {"IS","BRETON"},
        {"OS","BRETON"},
        {"AX","BRETON"},
        {"EZ","HISPANO"},
        {"A", "INDIO"}
    };

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string s;
    for (auto i = 0; i < n; i++) {
        std::getline(std::cin, s);

        bool start = (s.size() >= 3) ? s.substr(0, 3) == "MAC" : false;
        std::string output = "";

        if (s.size() >= 2)
            output = m[s.substr(s.size() - 2, 2)];

        if (s.size() >= 1 && !output.size())
            output = m[s.substr(s.size() - 1, 1)];

        if (start && output.size())
            std::cout << "MULATO";
        else if (!start && !output.size())
            std::cout << "PLUS ULTRA";
        else if (start)
            std::cout << "PICTO";
        else
            std::cout << output;

        std::cout << "\n";
    }

    return 0;
}

