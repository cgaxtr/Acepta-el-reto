#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int c;
	std::cin >> c;

	for(auto i = 0; i < c; i++){
	
		int n;
		std::cin >> n;

		auto max = 0;
		auto min = 1990;
		int aux;
		for(auto j = 0; j < n; j++){
			std::cin >> aux;
			max = std::max(max, aux);
			min = std::min(min, aux);
		}

		std::cout << max - min - 1 - (n - 2)<< "\n";
	}

	return 0;
}