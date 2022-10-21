#include <iostream>
#include <limits.h>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    while(n){

        auto dFlag = false;
        auto iFlag = false;
        char c;

        std::string s;
        std::getline(std::cin, s);

        auto i = 0;
        while(i < s.length() && (!dFlag || !iFlag)){
            switch (s[i])
            {
            case 'D':
                dFlag = true;
                break;
            
            case 'I':
                iFlag = true;
                break;
            }
            ++i;
        }

        std::cout << (dFlag && iFlag ? "ALGUNO NO COME\n" : "TODOS COMEN\n");
        std::cin >> n;
    }

    return 0;
}