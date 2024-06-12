#pragma GCC optimize ("O3")

#include <iostream>
#include <vector>
#include <cmath>

const int MAX_VALUE = 100000;
std::vector<bool> primes(MAX_VALUE + 1, true);

void primeSieve(int upperLimit) {

    primes[0] = false;
    primes[1] = false;
    for (auto i = 2; i <= upperLimit; ++i) {
        if (primes[i]) {
            for (auto j = 2; j * i <= upperLimit; ++j) {
                primes[j * i] = false;
            }
        }
    }
}

int countPrimes(int limit) {
    auto count = 0;
    for (auto i = 2; i <= limit; ++i)
        if (primes[i])
            ++count;

    return count;
}

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    primeSieve(MAX_VALUE);

    int n, m;
    std::cin >> n >> m;

    while (n != 0 || m != 0) {
        double gaussError = std::abs(((double)countPrimes(n) / n) - (1.0 / std::log(n)));
        double maxError = 1.0 / std::pow(10, m);

        if (gaussError > maxError)
            std::cout << "Mayor\n";
        else if (gaussError < maxError)
            std::cout << "Menor\n";
        else
            std::cout << "Igual\n";

        std::cin >> n >> m;
    }

    return 0;
}