#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    while(x2 >= x1 && y2 >= y1){

        std::cout << (x2 - x1) * (y2 - y1) << "\n";
        std::cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}