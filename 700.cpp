#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>

int main() {

	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;

	while(n){
		int t;
		std::string s;
		std::vector<std::pair<int, std::string>> v;
		std::unordered_map<std::string, int> m;

		auto j = 0;
		for (auto i = 0; i < n; i++) {
			std::cin >> t;
			std::cin.get();
			std::getline(std::cin, s);

			if (m.count(s))
				v[m[s]].first += t;
			else {
				m[s] = j;
				v.push_back({ t, s });
				++j;
			}		
		}

		std::sort(v.begin(), v.end(), [](std::pair<int, std::string> a, std::pair<int, std::string> b) { return a.first > b.first || a.first == b.first && a.second < b.second; });

		int i = 0;
		auto end = false;
		while (i < 3 && !end) {
			if (v[i].first < 30)
				end = true;
			else
				std::cout << v[i].second << "\n";
			++i;
		}

		std::cout << "---\n";
		std::cin >> n;
	}

	return 0;
}