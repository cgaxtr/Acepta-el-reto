#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        long int n, f, t ;
        std::cin >> n >> f >> t;

        std::cout << t % (n + 1) * f << "\n";
    }

    return 0;
}