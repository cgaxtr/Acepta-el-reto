#include <iostream>
#include <string>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::getline(std::cin, s);
	while(s != "FIN"){
		
		for(auto c : s){
			switch(c){
			case ' ':
				std::cout << " ";
				break;
			case 'Z': 
				std::cout << 'A';
				break;
			default :
				std::cout << (char)(c + 1);
			}
		}
		
		std::cout << "\n";
		std::getline(std::cin, s);
	}

	return 0;
}