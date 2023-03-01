#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    long long int n; 
    std::cin >> c;
    for(auto i = 0; i < c; i++){
        std::cin >> n;

        if(n % 3 == 2 || n % 3 == 0 )
            std::cout << "SI\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}