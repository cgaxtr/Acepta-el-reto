#include <iostream>
#include <vector>
#include <ios>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(false);

	int n, tDist;
	std::vector<int> stages;

	while (std::cin >> n && n != 0) {
		stages.clear();
		tDist = 0;
		for (auto i = 0; i < n; i++) {
			int aux;
			std::cin >> aux;
			stages.push_back(aux);
			tDist += aux;
		}


		for (auto i = 0; i < n; i++) {
			std::cout << tDist;
			if (i != n - 1)
				std::cout << " ";
			tDist -= stages[i];
		}
		std::cout << std::endl;
	}

	return 0;
}