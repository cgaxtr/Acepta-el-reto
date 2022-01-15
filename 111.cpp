#include <iostream>

int main()
{
    std::string e;
    int z;

    std::string orbitals[] = { "1s", "2s", "2p", "3s", "3p", "4s", "3d", "4p", "5s", "4d", "5p", "6s", "4f", "5d", "6p", "7s", "5f", "6d", "7p" };
    int electrons[] = { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6 };

    std::cin >> e;

    while (e != "Exit") {
        std::cin >> z;

        int i = 0;
        while (z > electrons[i]) {
            
            std::cout << orbitals[i] << electrons[i] << " ";
            z -= electrons[i];
            i++;
        }

        std::cout << orbitals[i] << z << "\n";
        std::cin >> e;
    }

    return 0;
}