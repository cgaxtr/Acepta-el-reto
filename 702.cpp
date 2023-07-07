#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int b;
    int m, p, dd, mm;
    std::string aux;
    char a;

    while (std::cin >> b >> m) {
        std::vector<int> v(12);

        for (auto i = 0; i < m; ++i) {
            std::cin >> dd >> a >> mm >> p;
            std::getline(std::cin, aux);
            
            v[mm - 1] += p;
        }

        b += v[0];
        std::cout << b;
        for (auto i = 1; i < v.size(); ++i) {
            b += v[i];
            std::cout << " " << b;
        }

        std::cout << "\n";
    }

    return 0;
}