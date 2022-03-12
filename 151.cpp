#include <iostream>
int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, aux;
    std::cin >> n;

    while(n != 0){
        bool isIdentity = true;

        for(auto i = 0; i < n; i++){
            for(auto j = 0; j < n; j++){
                std::cin >> aux;
                if(i == j && aux != 1)
                    isIdentity = false;
                
                if(i != j && aux != 0)
                    isIdentity = false;
            }
        }

        std::cout << (isIdentity ? "SI\n" : "NO\n");
        std::cin >> n;
    }

    return 0;
}