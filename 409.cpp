#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int c;
    std::cin >> c;
    while(c--){
        std::vector<int> v;
        int min, n, aux;
        std::cin >> min >> n;

        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            v.push_back(aux);
        }

        std::sort(v.begin(), v.end());

        int count = 0;
        int i = n - 1;
        while(i >= min - 1){
            if(v[i] - v[i - min + 1] <= 15  ){
                count++;
                i -= min;
            }else{
                i--;
            }
        }

        std::cout << count << "\n";
        
    }

    return 0;
}