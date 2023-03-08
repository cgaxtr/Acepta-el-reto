#include <iostream>

int fractalSumSides(int n){
    int sum = 4 * n;

    if(n == 1)
        return sum;
    else
        return sum + 4 * fractalSumSides(n/2);
}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n){
        std::cout << fractalSumSides(n) << "\n";
    }

    return 0;
}