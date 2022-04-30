#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    while (n--) {
        std::string st1, aux, st2;
        std::cin >> st1 >> aux >> st2;
           
        bool tautology = true;
        if (st1.length() != st2.length())
            tautology = false;
        else {
            auto i = 0;
            while(i < st1.length() && tautology){
                if (tolower(st1[i]) != tolower(st2[i])) {
                    tautology = false;
                }
                i++;
            }
        }


        std::cout << (tautology ? "TAUTOLOGIA\n" : "NO TAUTOLOGIA\n");
    }

    return 0;
}
