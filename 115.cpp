#pragma GCC optimize ("O3")
#include <iostream>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long aux1, aux2, mul;
    unsigned long n;

    std::cin >> n;

    while (n != 0) {
        aux1 = n * n;
        aux2 = 0;
        mul = 1;
        auto found = false;
        while (aux1 > 0 && !found) {

            aux2 += (aux1 % 10) * mul;
            aux1 /= 10;
            mul *= 10;

            if (aux1 + aux2 == n && aux2 != 0)
                found = true;
        }

        std::cout << (found ? "SI\n" : "NO\n");
        std::cin >> n;
    }

    return 0;
}