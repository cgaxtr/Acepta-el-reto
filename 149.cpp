#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, b;
    while(std::cin >> n){
        auto max = -1;
        for(auto i = 0; i < n; i++){
            std::cin >> b;
            max = std::max(b, max);
        }

        std::cout << max << "\n";
    }

    return 0;
}