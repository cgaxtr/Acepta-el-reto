#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, int> points = {
    {"A", 4},
    {"K", 3},
    {"Q", 2},
    {"J", 1}
};

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin.get();

    std::string num, p;
    for (auto i = 0; i < n; i++) {
        auto honor = 0;
        std::unordered_map<std::string, int> m;
        for (auto j = 0; j < 13; j++) {

            std::cin >> num >> p;
            honor += points[num];
            m[p]++;
        }

        for (auto p : m) {
            switch (p.second) {
            case 1:
                honor += 2;
                break;
            case 2:
                ++honor;
                break;
            }
        }

        honor += 3 * (4 - m.size());
        std::cout << honor << "\n";
    }

    return 0;
}