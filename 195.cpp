#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<float> v(7);

	while(std::cin >> v[0]){
		for(auto i = 1; i < 7; i++){
			std::cin >> v[i];
		}
	
		std::sort(v.begin(), v.end());
		std::cout << (v[2] + v[3] + v[4]) * 2 << "\n";
	}

	return 0;
}