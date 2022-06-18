#include <iostream>

int main()
{

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int g, c;

	std::cin >> g >> c;
	while (g || c) {

		std::cout << (g >= c ? "CUERDO\n" : "SENIL\n");
		std::cin >> g >> c;
	}
}