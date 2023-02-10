#include <iostream>
#include <sstream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while(std::getline(std::cin, s)){
        std::stringstream ss(s);

        auto chained = true;
        std::string aux1, aux2;
        ss >> aux1;
        while(chained && ss >> aux2){
            chained = (aux1[aux1.size() - 2] == aux2[0] && aux1[aux1.size() - 1] == aux2[1]);
            aux1 = aux2;
        }

        std::cout << (chained ? "SI\n" : "NO\n");
    }

    return 0;
}