#include <iostream>

long int reverse(const long int &n){
    auto aux = n;
    long int rev = 0;
    while(aux > 0){
        rev *= 10;
        rev += aux % 10;
        aux /= 10;
    }

    return rev;
}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;

    long int n, aux, rev, steps;
    bool isLychrel;
    for(auto i = 0; i < c; i++){
        std::cin >> n;
        isLychrel = false;
        steps = 0;
        while(!isLychrel && n < 1000000000){
            rev = reverse(n);
            n += rev;
            rev = reverse(n);

            isLychrel = n == rev;
            steps++;
            
        }

        if(isLychrel)
            std::cout << steps << " " << n << "\n";
        else
            std::cout << "Lychrel?\n";

    }

    return 0;
}