#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    for(auto i = 0; i < n; i++){
        
        int n, m, r;
        std::cin >> n >> m >> r;

        int aux = 0;
        if(r % (n * m) != 0)
            aux = 1;

        std::cout << r / (n * m) + aux << "\n";
    }


    return 0;
}