#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;

    while (c--) {
        int n, t;
        std::cin >> n >> t;
        std::cout << t - n << "\n";
    }

    return 0;
}