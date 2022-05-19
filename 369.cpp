#include <iostream>
#include <iomanip>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	while (n) {
		std::cout << std::setw(n) << std::setfill('1') << "";
		std::cout << "\n";
		std::cin >> n;
	}

	return 0;
}