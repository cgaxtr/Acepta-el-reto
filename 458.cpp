#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    while(c){     
        std::vector<long long> v(c); 
        while(c){
            std::cin >> v[v.size() - c];
            --c;
        }

        std::sort(v.begin(), v.end());
        std::cout << std::max(v[0] * v[1], v[v.size() - 1] * v[v.size() - 2]) << "\n";
        std::cin >> c;
    }

    return 0;
}