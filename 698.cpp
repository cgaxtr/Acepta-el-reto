#include <iostream>
#include <unordered_set>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
   
	int n, l;
	long long int aux;
	std::cin >> n;

	for (auto i = 0; i < n; ++i) {
		std::cin >> l;

		long long int sum = 0;
		std::unordered_set<long long int> s;
		for (auto j = 0; j < l * l; ++j) {
			std::cin >> aux;

			sum += aux;
			s.insert(aux);
		}

		auto it = s.begin();
		auto found = false;

		while (it != s.end() && !found) {
			if (s.count(sum - *it))
				found = true;
			else
				it++;
		}

		std::cout << (found ? "SI\n" : "NO\n");
	}

	return 0;
}