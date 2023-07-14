#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while (std::cin >> n) {
        std::vector<int> v;
        while (n) {
            v.push_back(n);
            std::cin >> n;
        }

        std::sort(v.begin(), v.end());

        auto found = false;
        auto i = 0;

        while (i < v.size() - 1 && !found) {

            if (v[i] + 1 != v[i + 1])
                found = true;
            else
                ++i;
        }

        std::cout << v[i] + 1 << "\n"; 
    }

    return 0;
}