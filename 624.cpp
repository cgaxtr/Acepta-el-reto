#include <iostream>
#include <unordered_map>
#include <math.h>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	while(n){
		std::unordered_map<int,int> m;
		int max = 0;
		int actual = 0;
		for(auto i = 0; i < n; i++){
			int v;
			std::cin >> v;

			if(m[v] == 0){
				++m[v];
				++actual;
				max = std::max(max, actual);
			}else{
				--m[v];
				--actual;
			}
			
		}

		std::cout << max << "\n";
		std::cin >> n;
	}

	return 0;
}