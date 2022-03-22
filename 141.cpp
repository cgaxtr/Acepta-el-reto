#include <iostream>
#include <stack>
#include <string>

int main() {
  	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
  
    std::string s;
    while(std::getline(std::cin, s)) {
        std::stack<char> op;
        bool ok = true;
        for (const auto& i : s) {
            if (i == '(' || i == '{' || i == '[') {
                op.push(i);
            }
            else if (i == ')') {
                if (!op.empty() && op.top() == '(') {
                    op.pop();
                }
                else {
                    ok = false;
					break;
                }
            }
            else if (i == '}') {
                if (!op.empty() && op.top() == '{') {
                    op.pop();
                }
                else {
                    ok = false;
					break;
                }
            }
            else if (i == ']') {
                if (!op.empty() && op.top() == '[') {
                    op.pop();
                }
                else {
                    ok = false;
					break;
                }
            }
        }
        std::cout << (ok && op.empty() ? "YES\n" : "NO\n");
    }

    return 0;
}