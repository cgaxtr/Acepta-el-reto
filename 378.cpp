#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){

        std::vector<std::pair<int,int>> v(n);
        for(auto i = 0; i < n; i++){
            std::cin >> v[i].first >> v[i].second;
        }

        std::sort(v.begin(), v.end());

        bool fair = true;
        int i = 1;
        while(i < n && fair){
            if(v[i-1].first < v[i].first && v[i-1].second >= v[i].second)
                fair = false;
            else
                i++;
        }

        std::cout << (fair ? "SI\n" : "NO\n");

        std::cin >> n;
    }

    return 0;
}