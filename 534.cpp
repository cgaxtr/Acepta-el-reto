#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while (n) {

        std::vector<int> v(n);
        for(auto i = 0; i < n; i++) {
            std::cin >> v[i];
        }

        std::sort(v.begin(), v.end());
        
        int high = 0;
        for (auto i = 0; i < n; i += 2) {
            high = std::max(v[i + 1] - v[i], high);
        }
        
        std::cout << high << "\n";
        std::cin >> n;
    }

    return 0;
}