#include <iostream>
#include <vector>
#include <algorithm>
#include <ios>

int main()
{   
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int cases;
    int number;
    std::vector<int> digits;
    std::vector<int>::iterator it;
    int cycles;
    bool valid;
    int aux, number1, number2, numZeros;

    std::cin >> cases;

    for(auto i = 0; i < cases; i++){
        bool valid = true;
        cycles = 0;

        std::cin >> number;

        if(number == 0)
            valid = false;

        while(number != 6174 && valid){
            digits.clear();
            while(number > 0){
                aux = number % 10;
                it = std::upper_bound(digits.begin(), digits.end(), aux);
                digits.insert(it, aux);
                number /= 10;
            }

            number1 = digits[0];
            number2 = digits[digits.size() - 1];
            for(auto j = 1; j < digits.size(); j++){
                number1 = number1 * 10 +  digits[j];
                number2 = number2 * 10 + digits[digits.size() - 1 - j];

            }

            numZeros = 4 - digits.size();
            while(numZeros--){
                number2 *= 10;
            }

            if((number = number2 - number1) == 0){
                valid = false;
            }
            
            cycles++;
        }

        if(valid)
            std::cout << cycles << std::endl;
        else
            std::cout << 8 << std::endl;
    }

    return 0;
}