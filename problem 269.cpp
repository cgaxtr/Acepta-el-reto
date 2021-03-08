#include <iostream>

int main()
{
    int cases;

    std::cin >> cases;

    for (int i = 0; i < cases; i++) {
        
        int patialSum = 0;
        int totalKm = 0;

        int aux;

        std::cin >> aux;
        while (aux != 0) {
            patialSum += aux;
            totalKm += patialSum * 2;

            std::cin >> aux;
        }

        std::cout << totalKm << std::endl;
    }
}
