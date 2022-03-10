#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v;

    while(n){
        v.clear();
        int aux;
        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            v.push_back(aux);
        }

        std::sort(v.begin(), v.end());

        int mode = v[0];
        int frequency = 1;
        auto count = 1;

        for(auto i = 1; i < v.size(); i++){
            if(v[i] == v[i - 1])
                count++;
            else{
                if(count > frequency){
                    mode = v[i - 1];
                    frequency = count;
                }
                count = 1;
            }
        }

        if(count > frequency){
            mode = v[v.size() - 1];
        }
        std::cout << mode << "\n";

        std::cin >> n;
    }

    return 0;
}