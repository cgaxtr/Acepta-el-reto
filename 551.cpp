#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while(std::getline(std::cin , s)){
        
        int aux = 0;
        for(int i = 0; i < s.length(); i++){
            aux = aux * 10 + s[i] - '0';
            if(aux >= 31){
                std::cout << (char)aux;
                aux = 0;
            }
        }

        std::cout << "\n";
    }

    return 0;
}