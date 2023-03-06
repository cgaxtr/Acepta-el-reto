#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        int aux;
        int total = 0;
        int max = 0;
        for(int i = 0; i < n; i++){
            std::cin >> aux;
            total += aux;
            max = std::max(total, max);
        }

        std::cout << total << " " << max << "\n";
        std::cin >> n;
    }

    return 0;
}