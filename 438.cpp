#include <iostream>
#include <string>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::string s;
	while(std::getline(std::cin, s)){
	
		auto countLetters = 0;
		auto countExclamationMarks = 0;
		
		for(auto c : s){
			if(isalpha(c))
				++countLetters;
			else if(c == '!')
				++countExclamationMarks;
		}


		std::cout << (countExclamationMarks > countLetters ? "ESGRITO\n" : "escrito\n");
	}

	return 0;
}