#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while (std::cin >> n) {
        std::vector<std::pair<int,int>> v(n);
        int h, m, s;
        char aux;

        for (auto i = 0; i < n; i++) {
            std::cin >> h >> aux >> m >> aux >> s;
            v[i].first = h * 3600 + m * 60 + s;
            v[i].second = i;
        }

        std::sort(v.begin(), v.end());
        std::vector<int> v2(n);

        int pos = 1;
        v2[v[0].second] = 1;
        for (auto i = 1; i < n; i++) {
            if (v[i].first - v[i-1].first > 1) {
                pos = i + 1;
            }
            v2[v[i].second] = pos;
        }

        for (auto const& i : v2)
            std::cout << i << "\n";
        std::cout << "---\n";
    }
}

