#pragma GCC optimize ("O3")

#include <iostream>
#include <string>
#include <deque>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::string s;
    std::cin.get();
    std::deque<long> operands;
    long a, b, result;
    for (auto i = 0; i < n; i++) {
        std::getline(std::cin, s);
        for (int j = s.length() - 1; j >= 0; j -= 2) {
            if (s[j] == '*' || s[j] == '/' || s[j] == '-' || s[j] == '+') {
                a = operands.front();
                operands.pop_front();
                b = operands.front();
                operands.pop_front();
                result = 0;
                switch (s[j]) {
                case '*':
                    result = a * b;
                    break;
                case '/':
                    result = a / b;
                    break;
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                }
                operands.push_front(result);
            } else {
                operands.push_front(s[j] - '0');
            }
        }
        std::cout << operands.front() << "\n";
        operands.clear();
    }

    return 0;
}