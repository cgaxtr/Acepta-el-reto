#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n;
    std::string s;
    std::string alphabet = "BCDFGHJKLMNPQRSTVWXYZ";

    std::cin >> n >> s;
    while (n != 9999 || s != "ZZZ") {
        
        n = (n + 1) % 10000;

        if (!n) {
            for (auto i = 2; i >= 0; i--) {
                char aux = s[i];
                s[i] = alphabet[(alphabet.find(s[i]) + 1) % alphabet.length()];
                
                if (aux != 'Z') break;
            }
        }
        
        std::cout << std::setw(4) << std::setfill('0') << n << " " << s << "\n";
        std::cin >> n >> s;
    }
}
