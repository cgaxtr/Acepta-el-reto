#include <iostream>

int main(){   

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long int p, n;
    std::cin >> p >> n;
    while (p > -1 || n > -1) {
        std::cout << ((p <= n || p == 1) ? "YES\n" : "NO\n");
        std::cin >> p >> n;
    }
}