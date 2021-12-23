#include <vector>
#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
	std::cin.tie(false);

    std::vector<int> digits;
    int number;
    int sum;

    while(std::cin >> number && number > -1){
        digits.clear();
        sum = 0;

        if(number == 0){
             std::cout << "0 = 0" << std::endl;
             continue;
        }

        while(number > 0){
            int aux = number % 10;
            sum += aux;
            digits.push_back(aux);
            number /= 10;
        }

        for(int i = digits.size() - 1; i > 0; i--){
            std::cout << digits[i] << " + ";
        }

        std::cout << digits[0] << " = " << sum << std::endl;
    }

    return 0;
}