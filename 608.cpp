#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        
        int v, count = 0;
        bool aboveSix = true;
        for(auto i = 0; i < n; i++){
            std::cin >> v;

            if(v > 6)
                aboveSix = true;
            
            if(aboveSix && v <= 4){
                ++count;
                aboveSix = false;
            }
        }

        std::cout << count << "\n";
        std::cin >> n;
    }

    return 0;
}