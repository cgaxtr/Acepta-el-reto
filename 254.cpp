#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n != 0){
        std::vector<int> skiers(n);
        std::vector<int> skis(n);

        for(auto i = 0; i < n; i++){
            std::cin >> skiers[i];
        }

        for(auto i = 0; i < n; i++){
            std::cin >> skis[i];
        }

        std::sort(skiers.begin(), skiers.end(), std::greater<int>());
        std::sort(skis.begin(), skis.end(), std::greater<int>());

        int sum = 0;
        for(auto i = 0; i < n; i++){
            sum += abs(skiers[i] - skis[i]);
        }

        std::cout << sum << "\n";
        std::cin >> n;
    }

    return 0;
}