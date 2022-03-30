#include <iostream>
#include <math.h>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n != 0){
        
        int l = sqrt(n);

        while(n % l != 0){
            --l;
        }

        std::cout << n / l << "\n";
        std::cin >> n;
    }

    return 0;
}