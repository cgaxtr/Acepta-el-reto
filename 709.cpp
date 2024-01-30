#include <iostream>
#include <unordered_map>
#include <string>

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
    
  int n;
  std::string s;
  std::cin >> n;

  while (n) {

    std::unordered_map<std::string, int> m;
    
    for (auto i = 0; i < n; i++) {
      std::cin >> s;
      m[s]++;
    }

    int max = 0;
    std::string winner;
    bool tie = false;
    for (auto const p : m) {
      if (p.second > max) {
        max = p.second;
        winner = p.first;
        tie = false;
      } else if (p.second == max) {
        tie = true;
      }
    }

    std::cout << (tie ? "EMPATE" : winner) << "\n";
    std::cin >> n;
  }

  return 0;
}

