#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    unsigned long long f;
    long p, n;
    std::cin >> f >> p >> n;
    while(f || p || n){

        unsigned long long res = 0;
        for(auto i = 0; i < n; i++){
            res += f;
            f *=p;
        }

        std::cout << res << "\n";
        std::cin >> f >> p >> n;
    }

    return 0;
}