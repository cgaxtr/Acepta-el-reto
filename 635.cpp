#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, y;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        std::cin >> y;

        auto s = y / 100;
        auto aux = ((y % 100) ? 1 : 0);            
        std::cout << s + aux << "\n";
    }


    return 0;
}