#include <iostream>
#include <iomanip>
#include <ios>

int main()
{

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    char c;
    int side, spaces, characters;

    std::cin >> side >> c;
    while( side != 0 || c != '0' ){
        spaces = side - 1;
        characters = side;
        for(auto i = 0; i < side; ++i){
            std::cout << std::setfill(' ') << std::setw(spaces) << "";
            std::cout << std::setfill(c) << std::setw(characters) << "" << std::endl;
            characters += 2;
            spaces--;
        }

        characters -= 2;
        spaces++;
        for(auto i = 0; i < side - 1; i++){
            characters -= 2;
            spaces++;
            std::cout << std::setfill(' ') << std::setw(spaces) << "";
            std::cout << std::setfill(c) << std::setw(characters) << "" << std::endl;
        }

        std::cin >> side >> c;
    }

    return 0;
}