#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, n;
    std::cin >> a >> n;

    while( a || n){
        
        int aux1, aux2;
        if(n > a){
            aux1 = n - a;
            aux2 = 99 - n + a;
        }else{
            aux1 = a - n;
            aux2 = 99 - a + n;
        }


        std::cout << std::min(aux1, aux2) << "\n";
        std::cin >> a >> n;
    }

    return 0;
}