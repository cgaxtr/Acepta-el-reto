#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(false);
    std::cout.tie(false);
    int a, b, sum;

    std::cin >> a;
    while (a >= 0) {
        sum = 0;
        std::cin >> b;
        while (b != -1) {
            sum += abs(b - a);
            a = b;
            std::cin >> b;
        }

        std::cout << sum << std::endl;
        std::cin >> a;
    }

    return 0;
}