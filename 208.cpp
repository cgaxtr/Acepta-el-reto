#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long int f, b;

	std::cin >> f >> b;
	while (f || b) {
		long long int total = (f * (f + 1)) / 2;
		long long int aux = f - b + 1;
		long long int down = (aux * (aux + 1)) / 2;

		std::cout << total - down << "\n";
		std::cin >> f >> b;
	}

	return 0;
}