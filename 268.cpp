#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int p, c;
    std::cin >> p >> c;
    while(p || c){
        std::vector<int> cassette(c);
        std::vector<int> cranckSet(p);
        
        for(auto i = 0; i < p; i++){
            std::cin >> cranckSet[i];
        }
        
        for(auto i = 0; i < c; i++){
            std::cin >> cassette[i];
        }

        std::vector<std::pair<double,std::pair<int,int>>> v;

        for(auto i = 0; i < p; i++){
            for(auto j = 0; j < c; j++){
                v.push_back({cranckSet[i]*1.0/cassette[j],{cranckSet[i],cassette[j]}});
            }
        }

        std::sort(v.begin(), v.end());

        if(v.size() >= 1)
            std::cout << v[0].second.first << "-" << v[0].second.second;
        for(auto i = 1; i < v.size(); i++){
            std::cout << " " << v[i].second.first << "-" << v[i].second.second ;
        }

        std::cout << "\n";
        std::cin >> p >> c;
    }
    return 0;
}