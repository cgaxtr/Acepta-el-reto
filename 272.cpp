#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    long int v;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        std::cin >> v;

        long int res = 0;
        long long int d = 1;

         while(v > 0){
            res = v % 6 * d + res;
            v /= 6;
            d *= 10;
        }

        std::cout << res << "\n";
    }

    return 0;
}