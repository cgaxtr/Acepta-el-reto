#include <iostream>
#include <math.h>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    long int n;
    std::cin >> n;
    while(n){

        int res = 0;
        int s = sqrt(n);
        for(int i = 1; i <= s; i++){
            if(n % i == 0)
                ++res;
        }

        res *= 2;

        //perfect square
        if(s * s == n)
            --res;

        std::cout << res << "\n";
        std::cin >> n;
    }

    return 0;
}