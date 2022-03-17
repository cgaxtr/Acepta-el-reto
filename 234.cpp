#include <iostream>
#include <deque>
#include <algorithm>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;

    while (c--) {
        std::deque<int> d;
        int n, v, aux;
        std::cin >> n >> v;

        for (auto i = 0; i < n; i++) {
            std::cin >> aux;
            d.push_back(aux);
        }

        std::sort(d.begin(), d.end(), std::greater<int>());

        int count = 0;
        while (!d.empty() && d.size() > 1) {
            if (d.front() + d.back() >= v) {
                count++;
                d.pop_front();
            }
            d.pop_back();
        }

        std::cout << count << "\n";
    }

    return 0;
}