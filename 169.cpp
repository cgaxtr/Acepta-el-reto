#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    std::cin.get();
    for(auto i = 0; i < c; i++){
        std::unordered_map<std::string, int> m;

        auto p = 0;
        std::string s;
        std::getline(std::cin, s);
        while(s != "===="){
            ++p;
            std::string aux;
            auto found = false;
            auto i = 0;

            while(i < s.length() && !found){
                if(s[i] == ',')
                    found = true;
                else
                    aux += tolower(s[i]);
                ++i;
            }    
            ++m[aux];
            std::getline(std::cin, s);
        }

        auto count = 0;
        for(auto p : m){
            if(p.second > 1)
                count += p.second;
        }

        std::cout << p << " " << count << "\n";
    }

    return 0;
}