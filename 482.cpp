#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::getline(std::cin, s);
	while (s != ".") {

		auto nCounter = 0;
		auto gCounter = 0;

		for (auto i = 0; i < s.length(); i = i + 2) {
			if(s[i] == 'N')
				++nCounter;
			else if(s[i] == 'G')
				++gCounter;
		}

		bool flagN = nCounter % 2 == 0;
		bool flagG = gCounter % 2 == 0;

		if (flagN && flagG)
			std::cout << "EMPAREJADOS\n";
		else if (flagN && !flagG)
			std::cout << "GRIS SOLITARIO\n";
		else if (!flagN && flagG)
			std::cout << "NEGRO SOLITARIO\n";
		else
			std::cout << "PAREJA MIXTA\n";

		std::getline(std::cin, s);
	}

	return 0;
}