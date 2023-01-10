#include <iostream>
#include <cmath>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long int n;
	std::cin >> n;
	while (n) {
		int s = (-1 + sqrt(1 + 8 * n)) / 2;
		std::cout << s << " " << n - (s*(s+1) / 2) << "\n";
		std::cin >> n;
	}

	return 0;
}