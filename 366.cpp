#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while (n) {
        std::vector<std::pair<int, int>> v(n);

        for (auto i = 0; i < n; i++) {
            std::cin >> v[i].first >> v[i].second;
        }

        std::sort(v.begin(), v.end(), [](std::pair<int, int> a, std::pair<int, int> b) { return a.first > b.first || (a.first == b.first && a.second < b.second); });

        for (auto p : v) {
            std::cout << p.first << " " << p.second << "\n";
        }

        std::cout << "\n";
        std::cin >> n;
    }

    return 0;
}
