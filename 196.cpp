#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;

    while(n--){
        std::vector<std::vector<bool>> m(9,std::vector<bool>(9));
        char aux;
        int numbers = 0;

        for(auto i = 0; i < 9; i++){
            for(auto j = 0; j < 9; j++){
                std::cin >> aux;

                if(aux == '-'){
                    m[i][j] = false;
                }else{
                    m[i][j] = true;
                    ++numbers;
                }
            }
        }

        if(numbers > 32){
            std::cout << "NO\n";
        }else{
            int i = 0;
            int j = 0;
            bool symetric = true;

            while(i < 9 && symetric){
                j = 0;
                while(j < 9 && symetric){
                    if(m[i][j] != m[9-i-1][9-j-1])
                        symetric = false;
                    ++j;
                }
                ++i;
            }

            if(symetric)
                std::cout << "SI\n";
            else
                std::cout << "NO\n";
        }
    }
	
    return 0;
}