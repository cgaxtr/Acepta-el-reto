#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        
        int n, v, sum = 0;
        std::cin >> n;
        for(auto j = 0; j < n; j++){
            std::cin >> v;
            sum += v & 1;
        }

        std::cout << n - sum << "\n";
    }

    return 0;
}