#include <iostream>
#include <vector>
#include <string>
int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c, p;
    std::cin >> c >> p;
    while(c || p){
        std::vector<int> v(c);
        int t;
        std::string s;
        for(auto i = 0; i < p; i++){
            std::cin >> t >> s;

            v[t-1]++;

        }

        int b = v[0];
        int pos = 0;
        bool tie= false;

        for(auto i = 1; i < c; i++){
            if(v[i] > b){
                b = v[i];
                tie = false;
                pos = i;
            }else if(v[i] == b){
                tie = true;
            }
        }

        if(tie)
            std::cout << "EMPATE\n";
        else
            std::cout << pos + 1 << "\n";

        std::cin >> c >> p;
    }

    return 0;
}