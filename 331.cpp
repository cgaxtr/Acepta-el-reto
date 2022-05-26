#include <iostream>
#include <string>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        int pos;
        bool invalid = false;
        std::string s;
        std::vector<std::string> v(26);

        for(auto i = 1; i <= n; i++){
            std::cin >> pos;
            std::getline(std::cin, s);

            if(i + pos < 1 || i + pos > 26 || v[i + pos - 1] != "")
                invalid = true;
            else
                v[i + pos - 1] = s;
        }

        if(invalid)
            std::cout << "IMPOSIBLE\n";
        else{
            for(auto i = 0; i < 26; i++){
                if(v[i] != "")
                    std::cout << i + 1 << v[i] << "\n";
            }
        }
        std::cout << "-----\n"; 
        std::cin >> n;
    }

    return 0;
}