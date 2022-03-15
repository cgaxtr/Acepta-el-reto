#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while (std::cin >> n && n) {
    
        auto sum = 0;
        int aux;
        for (auto i = 0; i < n; ++i) {
            std::cin >> aux;
            sum += aux;
        }

        int obj;
        std::cin >> obj;
        int result = obj * (n + 1) - sum;
        if (result > 10 || result < 0) {
            std::cout << "IMPOSIBLE\n";
        }else{
            std::cout << result << "\n";
        }
    }
}