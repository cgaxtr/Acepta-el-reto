#include <iostream>

int main()
{
    int c, d, m;

    std::cin >> c;

    int daysOfMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int sum;
    for (auto i = 0; i < c; i++) {
        sum = 0;
        std::cin >> d >> m;

        sum += daysOfMonth[m - 1] - d;

        
        while (m < 12)
            sum += daysOfMonth[m++];

        std::cout << sum << std::endl;
    }
}