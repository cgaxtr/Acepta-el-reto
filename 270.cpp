#include <iostream>
#include <map>
#include <string>

int main()
{

	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	while (n) {
		std::map<std::string, int> m;
		std::string name, mark;

		for (auto i = 0; i < n; i++) {
			getchar(); //to get the end line char
			std::getline(std::cin, name);
			std::cin >> mark;
			m[name] += (mark == "INCORRECTO" ? -1 : 1);
		}
	
		for (const auto& i : m){
			if (i.second != 0)
				std::cout << i.first << ", " << i.second << "\n";
		}
		
		
		std::cout << "---\n";

		std::cin >> n;
	}
	
}
