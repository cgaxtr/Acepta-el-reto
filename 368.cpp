#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int h,c;
    std::cin >> h >> c;

    while(h || c){
        std::cout << h / c * 10 + (h % c ? 10 : 0) << "\n";
        std::cin >> h >> c;  
    }

    return 0;
}