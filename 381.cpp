#include <iostream>


int gcd(int a, int b){
    int aux;
    while(b){
        aux = b;
        b = a % b;
        a = aux;
    }

    return a;
}

int mcm(int a, int b){

    int aux;
    if(a > b)
        aux = gcd(a, b);
    else
        aux = gcd(b, a);

    return (a * b) / aux;    
}


int main(){

    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        
        int a, p;
        std::cin >> a;

        p = a;
        for(auto i = 1; i < n; i++){
            std::cin >> a;
            p = mcm(p, a);
        }

        std::cout << p << "\n";
        std::cin >> n;
    }

    return 0;
}