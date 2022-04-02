#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    while(n--){
        int w, h;
        std::cin >> w >> h;

        int a = w * h;
        int b = a / 2;

        if(a % 2 == 0){
            std::cout << b << " " << b << "\n";
        }else{
            std::cout << b + 1 << " " << b << "\n";
        }
    }

    return 0;
}