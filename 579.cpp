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

        std::sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) -> bool{
                return left.first > right.first || left.first == right.first && left.second < right.second;
            });

        for(auto i = 0; i < n; i++){
            std::cout << v[i].first << " " << v[i].second << "\n";
        }

        std::cout << "---\n";
        std::cin >> n;
    }


    return 0;
}