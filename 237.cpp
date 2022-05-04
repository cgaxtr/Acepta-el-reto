#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    unsigned long long int n;
    while(std::cin >> s){
        int length = s.length();
        n = std::stoull(s);

        bool polidivisible = true;
        while(n && polidivisible){
            if(n % length != 0)
                polidivisible = false;
            
            --length;
            n /= 10;
        }

        std::cout << (polidivisible ? "POLIDIVISIBLE\n" : "NO POLIDIVISIBLE\n");

    }

    return 0;
}