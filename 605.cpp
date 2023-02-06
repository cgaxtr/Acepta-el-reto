#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char aux;
    std::cin >> aux;

    while(aux != '.'){
        auto i = 0, v = 0;
        while(aux != '.'){
            
            switch(aux){
                case 'V':
                    ++v;
                break;
                case 'I':
                    ++i;
                break;
                case 'A':
                    ++i;
                    ++v;
                break;
            }

            std::cin >> aux;
        }

        if (v == i)
            std::cout << "EMPATE\n";
        else if (v > i)
            std::cout << "VERANO\n";
        else
            std::cout << "INVIERNO\n";  

        std::cin >> aux;     
    }

    return 0;
}