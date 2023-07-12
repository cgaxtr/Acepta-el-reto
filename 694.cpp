#include <iostream>
#include <string>
#include <sstream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	std::cin.get();

	std::string s;
	for (auto i = 0; i < n; ++i) {
		std::getline(std::cin, s);

		std::stringstream ss(s);

		std::string aux;
		while (ss >> aux) {
			if (isupper(aux[0]))
				std::cout << aux[0];
		}

		std::cout << "\n";
	}

	return 0;
}