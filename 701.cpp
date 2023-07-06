#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    long int c, p;
    std::cin >> c;
    while (c != 0) {
        std::cin >> p;
        std::vector<std::pair<int, long int>> v(p);

        for (auto i = 0; i < p; ++i) {
            std::cin >> v[i].first >> v[i].second;
        }

        std::sort(v.begin(), v.end(), [](std::pair<int, long int> a, std::pair<int, long int> b) { return a.second > b.second; });

        long int i = 0;
        while (c > 0 && i < v.size()) {
            c -= v[i].first;
            ++i;
        }

        std::cout << v[i - 1].second << "\n";
        std::cin >> c;
    }

    return 0;
}