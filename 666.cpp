#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin.get();
    for(auto i = 0; i < n; i++){
        std::string s1, s2;

        std::getline(std::cin, s1);
        std::getline(std::cin, s2);

        int j = 0, k = 0;
        bool equals = true;
        while(j < s1.size() && k < s2.size() && equals){
            
            while(!isalpha(s1[j]) && j < s1.size()) ++j;
            while(!isalpha(s2[k]) && k < s2.size()) ++k;

            if(tolower(s1[j]) != tolower(s2[k]))
                equals = false;
            else{
                ++j;
                ++k;
            }
        }

        while(equals && j < s1.size())
            if(isalpha(s1[j])) 
                equals = false;
            else
                ++j;

        while(equals && k < s2.size())
            if(isalpha(s2[k])) 
                equals = false;
            else
                ++k;

        if(equals)
            std::cout << "SI\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}