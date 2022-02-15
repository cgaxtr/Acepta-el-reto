#include <iostream>
#include <string>
#include <list>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::list<char> l;
    std::string s;

    while(std::getline(std::cin, s)){
        l.clear();
        std::list<char>::iterator it = l.begin();

        for(auto const &c : s){
            switch (c)
            {
            case '-':
                it = l.begin();
                break;
            case '+':
                it = l.end();
                break;
            case '*':
                if(it != l.end())
                    it++;
                break;
            case '3':
                if(it != l.end())
                    it = l.erase(it);
                break;
            default:
                l.insert(it, c);
            }
        }

        for(auto const &c : l){
            std::cout << c;
        }
        std::cout << "\n";
    }       
        

    return 0;
}