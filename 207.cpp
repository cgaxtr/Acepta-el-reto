#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int c, r, t;
    int x, y;

    std::cin >> c >> r >> t;

    while (c || r || t) {
        //e -> empty t->tree s-> shadow
        char m[50][50] = {'e'};

        for (auto i = 0; i < t; i++) {

            std::cin >> y >> x;
            y--, x--;
            m[x][y] = 't';
            for (auto j = std::max(0, x - 1); j <= std::min(x + 1, r - 1); j++) {
                for (auto k = std::max(0, y - 1); k <= std::min(y + 1, c - 1); k++) {
                    if (m[j][k] != 't') m[j][k] = 's';
                }
            }
        }

            int n = 0;

        for (auto i = 0; i < r; i++) {
            for (auto j = 0; j < c; j++) {
                if (m[i][j] == 's') n++;
            }
        }

        std::cout << n << "\n";


        std::cin >> c >> r >> t;
    }
}