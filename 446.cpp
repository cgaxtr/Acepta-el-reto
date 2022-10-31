#include <iostream>
#include <string>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::string name, aux;
	int c;
	for(auto i = 0; i < n; i++){
		std::cin >> name >> c;

		auto count = 0;
		for(auto j = 0; j < c - 1; j++){
			std::cin >> aux;
			if(aux == name){
				++count;
			}
		}

		std::cin >> aux;
		if(aux == name && count == 0 && c > 1){
			std::cout << "VERDADERA\n";
		}else{
			std::cout << "FALSA\n";
		}
	}

	return 0;
}