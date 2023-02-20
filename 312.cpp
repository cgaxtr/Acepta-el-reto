#include <iostream>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b){

    unsigned long long int aux;
    while(b){
        aux = a % b;
        a = b;
        b = aux;
    }

    return a;
}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long int n, sum = 0;
    std::cin >> n;
    while(n){
        unsigned long long int g = n;
        sum = n;
        std::cin >> n;
        while(n){
            sum += n;

            unsigned long long int a, b;
            a = std::max(g, n);
            b = std::min(g, n);

            g = gcd(a, b);
            std::cin >> n;
        }

        std::cout << sum / g << "\n";
        std::cin >> n;
    }

    return 0;
}