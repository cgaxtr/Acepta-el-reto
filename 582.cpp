#include <iostream>
#include <string>
#include <sstream>

int main()
{
    int cases;
    std::string aux;

    std::cin >> cases;
    //to read '/n' caracter after number of cases
    std::getline(std::cin, aux);

    std::string line;
    std::string aux2;
    for (int i = 0; i < cases; i++) {
        std::getline(std::cin, line);
        
        if (line.size() == 0) {
            std::cout << "MARISA NARANJO" << std::endl;
            continue;
        }
            

        std::stringstream ss(line);
        int cont = 0;
        bool flag = true;
        while (ss >> aux2) {
            if (aux2 == "ding-dong") {
                std::cout << "SALIDA NULA" << std::endl;
                flag = false;
                break;
            }
            cont++;
        }

        if (cont == 12 && flag)
            std::cout << "CORRECTO" << std::endl;
        else if(cont < 12 && flag)
            std::cout << "TARDE" << std::endl;
    }
}

