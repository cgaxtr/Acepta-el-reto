#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n--){
        int p;
        std::cin >> p;
        
        if(p%2 == 0)
            std::cout << p+1 << "\n";
        else
            std::cout << p-1 << "\n";
    }

    return 0;
}