#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int l; //life;
    std::cin >> l;
    while(l){ 
        std::cin >> n;
        std::vector<std::pair<int,std::pair<int,int>>> v(n); // 1-> line, 2.1->damage innocent 2.2->damage evil
        for(auto i = 0; i < n; i++){
            v[i].first = i + 1;
            std::cin >> v[i].second.first >> v[i].second.second;
        }

        std::sort(v.begin(), v.end(), [](const std::pair<int,std::pair<int,int>> a, const std::pair<int,std::pair<int,int>> b) -> bool{

            return a.second.first < b.second.first || a.second.first == b.second.first && a.second.second > b.second.second ||
                a.second.first == b.second.first && a.second.second == b.second.second && a.first < b.first;
        });

        std::vector<int> res;
        int i = 0;
        while(l > 0 && i < v.size()){
            l -= v[i].second.second;
            res.push_back(v[i].first);
            i++;
        }

        if(l > 0){
            std::cout << "MUERTE ESCAPA";
        }else{
            std::cout << res[0];
            for(auto i = 1; i < res.size(); i++) std::cout << " " << res[i];
        }

        std::cout << "\n";
        std::cin >> l;
    }

    return 0;
}