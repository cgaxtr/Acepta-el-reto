#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	while (std::cin >> n) {

		auto sum = 0;
		std::cin >> sum;
		std::cout << sum;

		int y, x;
		for (auto i = 1; i < n; i++) {
			std::cin >> y;

			x = y * (i + 1) - sum;
			std::cout << " " << x;
			sum += x;
		}

		std::cout << "\n";
	}

	return 0;
}