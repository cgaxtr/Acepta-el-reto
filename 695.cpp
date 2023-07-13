#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    while (s != "0") {

        std::sort(s.begin(), s.end());


        long long int max = 0;
        long long int min = 0;

        for (auto i = 0; i < s.length(); ++i) {
            min = min * 10 + (s[i] - 48);
            max = max * 10 + (s[s.length() - 1 - i] - 48);
        }

        auto res = max - min;
        std::cout << max << " - " << min << " = " << res << " = " << res / 9 << " x 9\n";

        std::getline(std::cin, s);
    }
    
    return 0;
}
