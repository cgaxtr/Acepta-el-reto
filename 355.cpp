#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, y;
    std::cin >> n;
    
    for (auto i = 0; i < n; i++){
        std::cin >> y;

        if(y % 4 == 0){
            if(y % 100 == 0){
                if(y % 400 == 0){
                    std::cout << "29\n";
                }else{
                    std::cout << "28\n";
                }
            }else{
                std::cout << "29\n";
            }
        }else{
            std::cout << "28\n";
        }
    }

    return 0;
}