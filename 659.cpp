#include <iostream>
#include <string>

int main(){
	char values[] = {'T', 'G', 'C', 'F', 'D', 'R', 'H'};

	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);

	long n;
	while(std::cin >> n && n){
		std::string s;
		int i = 0;
		while(n){
			int aux = n % 10;
			n /= 10;
			for(auto j = 0; j < aux; j++){
				s = values[i] + s;
			}
			++i;
		}

		std::cout << s << "\n";
	}

	return 0;
}