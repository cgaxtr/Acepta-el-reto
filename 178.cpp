#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    std::cin.get();
    std::string s, p;
    for(auto i = 0; i < n; i++){
        std::getline(std::cin, s);
        std::getline(std::cin, p);

        auto found = false;
        auto j = 0, k = 0;
        while(j < s.length() && !found){
            
            while(s[j] == ' ') ++j;

            while(p[k] == ' ') ++k;

            if(tolower(s[j]) == tolower(p[k]))
                ++k;
            
            if(k == p.length())
                found = true;

            ++j;
        }

        std::cout << (found ? "SI\n" : "NO\n");
    }

    return 0;
}

