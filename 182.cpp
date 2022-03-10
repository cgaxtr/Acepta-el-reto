#include <iostream>

int main()
{
	
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);
	
    int cases;
    unsigned int number;
    unsigned int auxNumber;
    int steps;
    
    std::cin >> cases;

    for(auto i = 0; i < cases; i++){
        std::cin >> number;
        steps = 0;

        while(number >= 10){
           auxNumber = 1;
            while(number > 1){
                auxNumber *= number % 10;
                number /= 10;
            }
            steps++;
            number = auxNumber;
        }
        std::cout << steps << std::endl;
    }
    
    return 0;
}