#pragma GCC optimize ("O3")
#include <iostream>
#include <vector>
#include <cmath>

const double MAX_ERROR = 0.001;

double hornerAlgorithm(const std::vector <int> &v, const double &x) {

    double value = v[0];
    for (auto i = 1; i < v.size(); ++i) {
        value = value * x + v[i];
    }

    return value;
}


int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int g, t;
    std::cin >> g;
    while (g != 20) {

        std::vector<int> c(g + 1);

        for (auto i = 0; i <= g; ++i) {
            std::cin >> c[i];
        }

        std::cin >> t;

        double area = 0.0;
        double inv_t = 1.0 / t;
        double delta = 0.0;
        for (auto i = 0; i < t; ++i) {

            auto aux = hornerAlgorithm(c, delta);
            aux = std::min(1.0, aux);
            aux = std::max(0.0, aux);

            area += inv_t * aux;
            delta += inv_t;
        }


        if (0.5 > area + MAX_ERROR)
            std::cout << "ABEL\n";
        else if (0.5 < area - MAX_ERROR)
            std::cout << "CAIN\n";
        else
            std::cout << "JUSTO\n";

        std::cin >> g;
    }

    return 0;
}

