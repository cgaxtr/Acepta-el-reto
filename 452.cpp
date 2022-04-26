#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<int> v(n);
        while(n){ 
            std::cin >> v[v.size() - n];
            --n;
        }

        std::set<int> s;
        for(auto i = 0; i < v.size(); i++){
            for(auto j = i + 1; j < v.size(); j++){
                s.insert(abs(v[i] - v[j]));
            }
        }

        auto it = s.begin();
        std::cout << *it;
        it++;
        while(it != s.end()){
            std::cout << " " << *it;
            it++;
        }
        

        std::cout << "\n";
        std::cin >> n;
    }

    return 0;
}