#include <iostream>
#include <ios>

int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int r;
    std::cin >> r;

    while(r != 0){
        auto isLower = true, isUpper = true;
        int m[50][50] = { 0 };

        for(auto i = 0; i < r; i++){
            for(auto j = 0; j < r; j++){
                std::cin >> m[i][j];
            }
        }           

        //upper matrix        
        for(auto i = 0, j = 1; i < r && isUpper; i++, j++){
            for(auto k = j; k < r && isUpper; k++){
                if(m[i][k] != 0) isUpper = false;
            }
        }
        

        //lower matrix
        if(!isUpper){
            for(auto i = r - 1, k = r - 2; i >= 0 && isLower; i--, k--){
                for(auto j = k; j >= 0 && isLower; j--){
                    if(m[i][j] != 0) isLower = false;
                }
             }
        }
        
        std::cout << (isUpper || isLower ? "SI\n" : "NO\n");
        
        std::cin >> r;
    }

    return 0;
}