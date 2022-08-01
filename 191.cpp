#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int c, n, v, d;
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        std::cin >> n >> v >> d;
        int total = v;

        for(auto j = 1; j < n; j++){
            v -= d;
            total += v;
        }

        std::cout << total << "\n";
    }

    return 0;
}