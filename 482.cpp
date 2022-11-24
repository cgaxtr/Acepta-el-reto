#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	char aux;
	std::cin >> aux;
	while(aux != '.'){

		auto nCounter = 0;
		auto gCounter = 0;

		while(aux != '.'){
			if(aux == 'N')
				++nCounter;
			else
				++gCounter;
			std::cin >> aux;
		}

		bool flagN = nCounter % 2 == 0;
		bool flagG = gCounter % 2 == 0;

		if(flagN && flagG)
			std::cout << "EMPAREJADOS\n";
		else if(flagN && !flagG)
			std::cout << "GRIS SOLITARIO\n";
		else if(!flagN && flagG)
			std::cout << "NEGRO SOLITARIO\n";
		else
			std::cout << "PAREJA MIXTA\n";

		std::cin >> aux;
	}

	return 0;
}