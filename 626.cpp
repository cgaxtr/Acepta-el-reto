#include <iostream>
#include <iomanip>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int dd, mm, yyyy;
	char aux;

	for (auto i = 0; i < n; i++) {
		std::cin >> dd >> aux >> mm >> aux >> yyyy;
		
		if (!((mm == 1 || (mm == 2 && dd < 29)) && yyyy % 4 == 0))
			yyyy = yyyy + 4 - yyyy % 4;		
		
		std::cout << "29/02/";
		std::cout << std::setw(4) << std::setfill('0') << yyyy << "\n";
	}

	return 0;
}