#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::getline(std::cin, s);
	while (s != "0") {

		auto isEan13 = s.length() > 8;
		auto cd = s[s.length() - 1] - '0';
		auto res = 0;
		bool odd = true;

		for (int i = s.length() - 2; i >= 0; i--) {
			if (odd)
				res += 3 * (s[i] - '0');
			else
				res += (s[i] - '0');
			odd ^= true;
		}

		auto valid = (res + cd) % 10 == 0;

		if (!valid)
			std::cout << "NO\n";
		else {
			std::cout << "SI";
			if (isEan13) {

				if (s.length() < 13) std::cout << " EEUU";
				else if (s.substr(0, 3) == "380") std::cout << " Bulgaria";
				else if (s.substr(0, 3) == "539") std::cout << " Irlanda";
				else if (s.substr(0, 3) == "560") std::cout << " Portugal";
				else if (s.substr(0, 3) == "759") std::cout << " Venezuela";
				else if (s.substr(0, 3) == "850") std::cout << " Cuba";
				else if (s.substr(0, 3) == "890") std::cout << " India";

				else if (s.substr(0, 2) == "50") std::cout << " Inglaterra";
				else if (s.substr(0, 2) == "70") std::cout << " Noruega";

				else if (s[0] == '0') std::cout << " EEUU";
				else std::cout << " Desconocido";

			}
			std::cout << "\n";
		}

		std::getline(std::cin, s);
	}

	return 0;
}