#include <iostream>
#include <string>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	while(std::getline(std::cin, s)){
		
		int i = 0;
		bool dotFound = false;
		bool add = false;
		std::string real;
		std::string decimal;
		while(i < s.length() && !dotFound){
			switch(s[i]){
			case '.':
				dotFound = true;
				break;
			case '0':
				if(add)
					real.push_back(s[i]);
				break;
			default:
				real.push_back(s[i]);
				add = true;
			}
			++i;
		}

		if(dotFound){
			int j = s.length() - 1;
			bool found = false;
			add = false;
			while(j >= 0 && !found){
				switch(s[j]){
				case '.':
					found = true;
					break;
				case '0':
					if(add)
						decimal = s[j] + decimal;
					break;
				default:
					add = true;
					decimal = s[j] + decimal;
				}
				--j;
			}
		}
		
		std::cout << (real.empty() ? "0" : real);
		if(!decimal.empty()){
			std::cout << "." << decimal;
		}

		std::cout << "\n";
	}

	return 0;
}