#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n){
        std::vector<int> v(n);

        for(auto i = 0; i < n; i++){
            std::cin >> v[i];
        }

        std::sort(v.begin(), v.end(), std::greater<int>());

        int count = 0;
        for(auto i = 2; i < n; i = i + 3){
            count += v[i];
        }

        std::cout << count << "\n";
    }

    return 0;
}