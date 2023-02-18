#include <iostream>
#include <unordered_map>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, d1, d2;
    std::cin >> n;

    for (auto i = 0; i < n; i++) {

        std::cin >> d1 >> d2;
        std::unordered_map<int, int> m;

        auto max = 0;
        for (auto j = 1; j <= d1; j++) {
            for (auto k = 1; k <= d2; k++) {
                m[j + k]++;
                max = std::max(max, m[j + k]);
            }
        }

        auto first = true;
        for (int j = 2; j < d1 + d2; j++) {
            if (m[j] == max) {
                if (first) {
                    std::cout<< j;
                    first = false;
                }
                else
                    std::cout << " " << j;
            }
        }

        std::cout << "\n";
    }

    return 0;
}