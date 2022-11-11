#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;

	for(auto i = 0; i < n; i++){
		int l;
		std::cin >> l;

		int c;
		auto counter = 0;
		bool odd = false;
		bool valid = true;
		for(auto j = 0; j < l; j++){
			std::cin >> c;
			if(c % 2 == 0){
				if(!odd)
					++counter;
				else
					valid = false;
			}else{
				odd = true;
			}
		}

		if(valid)
			std::cout << "SI " << counter << "\n";
		else
			std::cout << "NO\n";
	}

	return 0;
}