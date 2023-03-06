#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int l;
    std::cin >> l;
    while(l){
        std::string s, aux;
        std::map<std::string, std::vector<bool>> m;
        std::cin.get();
        for(auto i = 0; i < l; i++){
            std::getline(std::cin, s); 
            std::stringstream ss(s);
            while(ss >> aux){
                std::transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
                if(aux.length() > 2){
                    if(!m.count(aux))
                        m[aux] = std::vector<bool>(l);
                    m[aux][i] = true;
                }
            }            
        }

        for(auto v: m){
            std::cout << v.first << " ";
            bool first = true;
            for(auto i = 0; i < v.second.size(); i++){
                if(v.second[i])
                    if(first){
                        std::cout << i + 1;
                        first = false;
                    }else{
                        std::cout << " " << i + 1;
                    }
            }
            std::cout << "\n";
        }
        std::cout << "----\n";
        std::cin >> l;
    }


    return 0;
}