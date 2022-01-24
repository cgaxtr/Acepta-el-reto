#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, c, pos;
    while(std::cin >> c){
        std::vector<int> v;
        int pos;

        std::cin >> n;
        v.push_back(n);

        for(auto i = 1; i < c; i++){
            std::cin >> n;                
             
           if(v[v.size() - 1] <= n){
               v.push_back(n);
           }else{
               std::vector<int>::iterator it = std::upper_bound(v.begin(), v.end(), n);
               *it = n;
           }
        }

        std::cout << v.size() << "\n";
    }

    return 0;
}