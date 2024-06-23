#pragma GCC optimize ("O3")
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int b1, b2, d1, d2;
    for(auto i = 0; i < n; ++i)
    {
        std::cin >> b1 >> d1 >> b2 >> d2;

        auto max = std::max(b1, b2);
        auto min = std::min(d1, d2);
        auto res = std::max(min - max + 1, 0);

        std::cout << res << "\n";
    }

    return 0;
}
