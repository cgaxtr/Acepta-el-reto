#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int d;
    for(auto i = 0; i < n; i++){
        std::cin >> d;
        std::cout << d << " " << d*2 << "\n";

    }

    return 0;
}