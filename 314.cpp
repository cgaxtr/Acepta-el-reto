#include <iostream>
#include <vector>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	while (n--) {
		std::vector<int> v;
		int nt, t;
		std::cin >> nt;
		
		for (auto i = 0; i < nt; i++) {
			std::cin >> t;
			v.push_back(t);
		}

		int valleys = 0, peaks = 0;
		for (auto i = 1; i < nt - 1; i++) {
			if (v[i - 1] > v[i] && v[i] < v[i + 1])
				++valleys;
			if (v[i - 1] < v[i] && v[i] > v[i + 1])
				++peaks;
		}

		std::cout << peaks << " " << valleys << "\n";
	}

}
