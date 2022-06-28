#include <algorithm>
#include <iostream>
#include <string>
#include <set>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n != 0){
        std::cin.get();
        std::set<std::string> m;
        std::string s;
        for(auto i = 0; i < n; i++){
            std::getline(std::cin, s);
            std::transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
            m.insert(s);
        }

        std::cout << m.size() << "\n";
        std::cin >> n;
    }

    return 0;
}