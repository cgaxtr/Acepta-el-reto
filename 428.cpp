#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        int n;
        int fours = 0;
        std::cin >> n;

        while(n >= 5 && fours < 2){
            if(n % 5 == 4)
                ++fours;
            
            n /= 5;
        }

        if(n == 4) ++fours;

        if(fours >= 2)
            std::cout << "SI\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}