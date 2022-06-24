#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin.get();
    while(n--){
        std::string s;
        int counter = 0;
        std::getline(std::cin, s);

        for(auto i = 0; i < s.length(); i += 2){
                counter++;
            if(s[i] == s[i+1])
                counter++;
        }

        std::cout << counter << "\n";
    }

    return 0;
}