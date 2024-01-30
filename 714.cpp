#include <iostream>
#include <deque>
#include <string>

int main()
{

  std::ios::sync_with_stdio(false);
  //std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  while (n) {

    std::deque<std::string> dq;
    std::string aux;
    std::cin.get();
    for (auto i = 0; i < n; i++) {
      std::cin >> aux;
      dq.push_back(aux);
    }

    int a, b;
    while(dq.size() != 1) {
      std::cin >> a >> b;
      
      if (a > b) {
        dq.push_back(dq.front());
        dq.pop_front();
        dq.pop_front();
      }
      else {
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
      }
    }

    std::cout << dq.front() << "\n";
    std::cin >> n;
  }


  return 0;
}