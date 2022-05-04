#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long int n;
    std::cin >> n;
    while(n){
        
        int aux = n % 10;
        long int sum = 0;
        int d = 10;
        while(n){
            n /= 10;
            sum += aux;
            aux = d * (n % 10) + aux;
            d *= 10;
        }

        std::cout << sum << "\n";
        std::cin >> n;
    }

    return 0;
}