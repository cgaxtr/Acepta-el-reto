#include <iostream>
#include <map>
#include <set>
#include <string>
#include <list>
#include <sstream>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int l;
    std::cin >> l;
    while(l){
        std::string s, aux;
        std::map<std::string, std::set<int>> m;
        std::cin.get();
        for(auto i = 0; i < l; i++){
            std::getline(std::cin, s); 
            std::stringstream ss(s);
            while(ss >> aux){
                std::transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
                if(aux.length() > 2){
                    m[aux].insert(i+1);
                }
            }            
        }

        for(auto v: m){
            std::cout << v.first << " ";
            bool first = true;
            for(auto i : v.second){
                if(first){
                    std::cout << i;
                    first = false;
                }else{
                    std::cout << " " << i;
                }     
            }
            std::cout << "\n";
        }
        std::cout << "----\n";
        std::cin >> l;
    }


    return 0;
}