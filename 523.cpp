#include <iostream>
#include <string>

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string plate, aux, plateLetters, auxLetters;
    int plateNumbers, auxNumbers;
    long long int newer = 0, older = 0;
    int n;
    std::cin >> n;
    std::cin.get();

    for(auto i = 0; i < n; i++){
        std::cin >> plate >> aux;
        plateNumbers = std::stoi(plate.substr(0, 4));
        plateLetters = plate.substr(4, 3);

        while(aux != "0"){

            auxNumbers = std::stoi(aux.substr(0, 4));
            auxLetters = aux.substr(4, 3);

            if(plateLetters > auxLetters)
                ++older;
            else if(plateLetters < auxLetters)
                ++newer;
            else{
                if(plateNumbers > auxNumbers)
                    ++older;
                else
                    ++newer;
            }

            std::cin >> aux;
        }
        std::cout << older << " " << newer << "\n";
        newer = 0;
        older = 0;
    }

    return 0;
}