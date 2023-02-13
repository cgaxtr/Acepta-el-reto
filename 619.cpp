#include <iostream>
#include <vector>
#include <unordered_set>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r, c;

    std::cin >> c >> r;
    while (c || r) {
        std::vector<std::vector<char>> m(r, std::vector<char>(c));

        for (auto i = 0; i < r; i++) {
            for (auto j = 0; j < c; j++) {
                std::cin >> m[i][j];
            }
        }

        auto i = 0, j = 0, k = 0, l = 0;
        bool isValid = true;
        std::unordered_set<char> s;

        while (i < r && isValid) {
            while (j < c && isValid) {
                while (k < 8 && isValid) {
                    while (l < 8 && isValid) {
                        s.insert(m[i + k][j + l]);
                        if (s.size() > 2)
                            isValid = false;
                        ++l; 
                    }
                    l = 0;
                    ++k;
                }
                k = 0;
                s.clear();
                j += 8;
            }
            j = 0;
            i += 8;
        }

        std::cout << (isValid ? "SI\n" : "NO\n");
        std::cin >> c >> r;
    }

    return 0;
}

