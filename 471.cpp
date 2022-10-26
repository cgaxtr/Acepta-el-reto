#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;


	for(auto i = 0; i < n; i++){
		int s, p;
		std::cin >> s >> p;

		int firstSector, secondSector;

		firstSector = p - s;
		if(firstSector < 0) firstSector += 360;
		secondSector = (360 - p + s) % 360;

		if(firstSector < secondSector)
			std::cout << "ASCENDENTE\n";
		else if(firstSector > secondSector)
			std::cout << "DESCENDENTE\n";
		else
			std::cout << "DA IGUAL\n";
	}
}