#include <iostream>
#include <vector>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    int n = 1;

    while(n){
        std::getline(std::cin, s);
        std::vector<int> v(s.size());
        std::cin >> n;

        for(auto i = 1; i < s.size(); i++){
            if(s[i - 1] == s[i])
                v[i] = v[i-1];
            else
                v[i] = v[i-1] + 1;
        }

        int s, e;
        for(auto i = 0; i < n; i++){
            std::cin >> s >> e;
            std::cout << (v[s] == v[e] ? "SI\n" : "NO\n");
        }
        if(n != 0)
            std::cout << "\n";
        std::cin.get();
    }

    return 0;
}