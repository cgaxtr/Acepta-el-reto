#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	for (auto i = 0; i < n; i++) {

		int major1, minor1, patch1, major2, minor2, patch2;
		char aux;
		auto valid = false;

		std::cin >> major1 >> aux >> minor1 >> aux >> patch1 >> major2 >> aux >> minor2 >> aux >> patch2;

		if (major1 == major2 && minor1 == minor2 && patch1 == patch2 - 1)
			valid = true;

		if (major1 == major2 && minor1 == minor2 - 1 && patch2 == 0)
			valid = true;

		if(major1 == major2 - 1 && minor2 == 0 && patch2 == 0)
			valid = true;

		std::cout << (valid ? "SI\n" : "NO\n");
	}

	return 0;
}