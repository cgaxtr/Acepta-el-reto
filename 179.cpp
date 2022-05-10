#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        
        std::vector<int> v(n+1);
        v[0] = 0;
        for(auto i = 0; i < n; i++){
            std::cin >> v[i+1];
            v[i+1] += v[i];
        }

        int c, f, l;
        std::cin >> c;
        for(auto i = 0; i < c; i++){
            std::cin >> f >> l;
            std::cout << v[l] - v[f-1] << "\n";
        }

    
        std::cin >> n;
    }

    return 0;
}