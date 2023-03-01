#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);
    while(s != "XXX"){
        
        std::string s1, s2;
        for(auto i = 0; i < s.length(); i++){

            if(isalpha(s[i])){
                s1.push_back(tolower(s[i]));
                s2 = (char)tolower(s[i]) + s2;
            }
        }

        std::cout << (s1 == s2 ? "SI\n" : "NO\n");
        std::getline(std::cin, s);
    }

    return 0;
}