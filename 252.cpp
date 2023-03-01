#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

	std::string s;
	std::getline(std::cin, s);
	while(s != "XXX"){

		int i = 0;
		int j = s.length() - 1;
		bool flag = false;

		while(i <= j && !flag){
			
			while(s[i] == ' ')
				++i;

			while(s[j] == ' ')
				--j;

			if(tolower(s[i]) != tolower(s[j]))
				flag = true;

			--j;
			++i;
		}

		std::cout << (!flag ? "SI\n" : "NO\n");
		std::getline(std::cin, s);
	}
	
	return 0;
}