#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, v;
	std::cin >> n;
	while(n){
		unsigned long long int sum = 0;
		for(auto i = 0; i < n; i++){
			std::cin >> v;
			sum += v;
		}
		
		std::cout << sum << "\n";
		std::cin >> n;
	}

	return 0;
}