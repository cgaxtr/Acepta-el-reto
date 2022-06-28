#include <iostream>
#include <unordered_map>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while(std::getline(std::cin, s)){
        int m[10] = { 0 };

        for(auto c : s){
            m[c - 48]++;
        }

        int count = m[0];
        auto i = 1;
        bool equal = true;
        while(i <= 9 && equal){
            
            if(count != m[i])
                equal = false;
            else
                ++i;
        }

        std::cout << (equal ? "subnormal" : "no subnormal") << "\n";
    }

    return 0;
}