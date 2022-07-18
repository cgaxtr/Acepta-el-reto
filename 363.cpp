#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int e;
    std::cin >> e;
    while(e){
        long sum = 0;
        int n, aux;
        std::cin >> n;

        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            sum += aux;
        }

        std::cout << (sum % e == 0 ? sum / e : sum / e + 1) << "\n";
        std::cin >> e;
    }

    return 0;
}