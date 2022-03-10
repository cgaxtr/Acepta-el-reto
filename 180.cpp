#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int sides[3];
	int c;
	std::cin >> c;

	while (c--) {

		std::cin >> sides[0] >> sides[1] >> sides[2];
		std::sort(sides, sides + 3, std::greater<int>());

		auto h = sides[0] * sides[0];
		auto c1 = sides[1] * sides[1];
		auto c2 = sides[2] * sides[2];

		if (sides[0] >= sides[1] + sides[2]) {
			std::cout << "IMPOSIBLE\n";
			continue;
		}

		if (h == c1 + c2)
			std::cout << "RECTANGULO\n";
		else if (h < c1 + c2)
			std::cout << "ACUTANGULO\n";
		else if (h > c1 + c2)
			std::cout << "OBTUSANGULO\n";
	}

	return 0;
}