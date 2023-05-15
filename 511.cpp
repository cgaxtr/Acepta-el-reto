#include <iostream>
#include <vector>
#include <utility>

int main() {

	int a, b;
	while (std::cin >> a >> b) {

		std::vector<std::pair<long long int, long long int>> va(a);
		std::vector <std::pair<long long int, long long int>> vb(b);
		for (auto i = 0; i < a; ++i) {
			std::cin >> va[i].first;
			std::cin >> va[i].second;
		}

		for (auto i = 0; i < b; ++i) {
			std::cin >> vb[i].first;
			std::cin >> vb[i].second;
		}

		long long int iA = 0;
		long long int iB = 0;
		long long int res = 0;
		while (iA < a) {
			auto n = std::min(va[iA].first, vb[iB].first);
			
			res += va[iA].second * vb[iB].second * n;

			va[iA].first -= n;
			vb[iB].first -= n;

			if (va[iA].first <= 0)
				++iA;

			if (vb[iB].first <= 0) {
				++iB;
			}
		}

		std::cout << res << '\n';

	}

	return 0;
}