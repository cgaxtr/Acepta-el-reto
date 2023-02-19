#include <iostream>
#include <cmath>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, r;
    std::cin >> n;
    while (n) {
        double aux = sqrt(8 * n + 1);
        r = ceil(aux) / 2;
        std::cout << r << "\n";
        std::cin >> n;
    }

    return 0;
}
