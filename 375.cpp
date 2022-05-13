#include <iostream>
#include <string>
#include <iomanip>

int main(){

    std::string s;
    while(std::getline(std::cin, s)){

        //std::ios::sync_with_stdio(false);
        //std::cin.tie(nullptr);

        int a; //azimuth
        char p; //position;

        a = (s[0] - '0') * 10 + s[1] - '0';

        if(s.length() == 3){
            if(s[2] == 'L') p = 'R';
            else if(s[2] == 'R') p = 'L';
            else p = s[2];
        }

        a = (a + 18) % 36;

        if(a == 0)
            std::cout << "36";
        else
            std::cout << std::setw(2) << std::setfill('0') << a;


        if(p) std::cout << p;
        
        std::cout << "\n";
    }

    return 0;
}