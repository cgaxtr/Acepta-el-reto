#include <iostream>
int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a;
    while (std::cin >> a && a) {
        int n = a, r = 0;

        if (a % 10 == 0) {
            std::cout << "NO\n";
            continue;
        }

        while (a > 0) {
            r *= 10;
            r += a % 10;
            a /= 10;
        }
       
        int num = n + r;
        bool odden = true;
        while (num > 0 && odden) {
            if ((num % 10) % 2 == 0)
                odden = false;
            else
                num /= 10;
        }

        if (odden)
            std::cout << "SI\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}