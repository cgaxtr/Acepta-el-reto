#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string stan = "stanlee";
    std::string s;
    int n;
    std::cin >> n;
    std::cin.get();
    for(auto i = 0; i < n; i++){
        std::getline(std::cin, s);

        auto j = 0;
        auto res = 0;
        for(auto i = 0; i < s.length(); i++){
            
            if(tolower(s[i]) == stan[j])
                ++j;

                if(j > 6){
                    ++res;
                    j = 0;
                }
        }


        std::cout << res << "\n";
    }

    return 0;
}