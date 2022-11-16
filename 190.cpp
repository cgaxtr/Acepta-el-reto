#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long int a, b;
	std::cin >> a >> b;
	while(a >= b){
		unsigned long long int result = 1;

		for(auto i = a; i > b; i--){
			result *= i;
		}

		std::cout << result << "\n";
		std::cin >> a >> b;
	}

	return 0;
}