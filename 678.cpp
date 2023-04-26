#include <iostream>
#include <unordered_set>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::unordered_set<char> toBeFound;
    std::unordered_set<char> used;

    std::string s;
    std::getline(std::cin, s);
    while(s != "."){

        for(const auto &c : s){
            toBeFound.insert(c);
        }

        std::getline(std::cin, s);

        auto errors = 0;
        auto i = 0;
        auto finished = false;
        while(i < s.length() && !finished){

            if(!used.count(s[i])){
                if(!toBeFound.count(s[i]))
                    ++errors;
                else
                    toBeFound.erase(s[i]);
            }

            used.insert(s[i]);
            if(toBeFound.size() == 0 || errors >= 7)
                finished = true;
            ++i;
        }

        if(!finished)
            std::cout << "COLGANDO\n";
        else if(errors >= 7)
            std::cout << "AHORCADO\n";
        else
            std::cout << "SALVADO\n";

        std::getline(std::cin, s);
        toBeFound.clear();
        used.clear();
    }


    return 0;
}