#include <iostream>

int main(){
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, num;
	std::cin >> n;
	for(auto i = 0; i < n; i++){
		std::cin >> num;
		
		auto count = 0;
		while(num >= 5){
			count += num / 5;
			num /= 5;
		}

		std::cout << count << "\n";
	}

	return 0;
}