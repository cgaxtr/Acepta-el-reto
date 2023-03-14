#include <iostream>
#include <string>
#include <stack>
#include <vector>

bool isVowel(const char c) {
	return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u';
}

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::string s;
	while (std::getline(std::cin, s)) {
		std::stack<char> st;
		std::string aux;

		bool odd = true;
		for (auto c : s) {

			if (odd) {
				aux.push_back(c);
			} else {
				st.push(c);
			}
			odd ^= 1;
		}

		while (!st.empty()) {
			aux.push_back(st.top());
			st.pop();
		}

		std::cout << s << " => ";

		for (auto c : aux) {
			if (isVowel(c)) {
				while (!st.empty()) {
					std::cout << st.top();
					st.pop();
				}

				std::cout << c;
			} else {
				st.push(c);
			}
		}

		while (!st.empty()) {
			std::cout << st.top();
			st.pop();
		}

		std::cout << "\n";

	}

	return 0;
}