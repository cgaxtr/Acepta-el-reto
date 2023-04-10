#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while(std::getline(std::cin, s)){
        
        std::cout << s[0];
        for(auto i = 1; i < s.length(); i++){
            std::cout << '0' << s[i];
        }

        std::cout << "\n";
    }

    return 0;
}