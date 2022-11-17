#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int c;
	std::cin >> c;

	for(auto i = 0; i < c; i++){
		int floor, steps, floorUp, stepsUp;
		std::cin >> floor >> steps >> floorUp >> stepsUp;

		auto aux = floorUp * steps + stepsUp;
		std::cout << aux << " " << aux + (floor * steps) << "\n";
	}

	return 0;
}