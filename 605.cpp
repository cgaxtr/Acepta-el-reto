#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    while(s  != "."){
        auto i = 0, v = 0;
        for(auto c : s){
            switch(c){
                case 'V':
                    ++v;
                break;
                case 'I':
                    ++i;
                break;
            }
        }

        if (v == i)
            std::cout << "EMPATE\n";
        else if (v > i)
            std::cout << "VERANO\n";
        else
            std::cout << "INVIERNO\n";  

        std::getline(std::cin, s);
    }

    return 0;
}