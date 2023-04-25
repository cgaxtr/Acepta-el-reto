#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int c;
    long long int n;
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        std::cin >> n;
        long long int aux = n / 10;

        if(aux){
            aux = (aux + 1) * aux;
            std::cout << aux;
        }
        
        std::cout << "25\n";

    }

    return 0;
}