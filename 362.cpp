#include <iostream>

int main() {

	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);

	int n, d, m;
	std::cin >> n;
	for (auto i = 0; i < n; i++){
		std::cin >> d >> m;

		if (d == 25 && m == 12)
			std::cout << "SI\n";
		else
			std::cout << "NO\n";

	}

	return 0;
}