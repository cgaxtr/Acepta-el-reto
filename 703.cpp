#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int h, m, d, s;
    char aux;

    std::cin >> n;
    for (auto i = 0; i < n; ++i) {
        std::cin >> h >> aux >> m >> d >> s;
        std::cout << h * s + (m * s) / 60 << "\n";
    }

    return 0;
}