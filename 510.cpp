#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<int> positive;
        std::vector<int> negative;
        std::vector<bool> pos(n);

        for(auto i = 0; i < n; i++){
            int aux;
            std::cin >> aux;
            if(aux > 0)
                positive.push_back(aux);
            else{
                negative.push_back(aux);
                pos[i] = true;
            }
        }

        std::sort(positive.begin(), positive.end());
        std::sort(negative.begin(), negative.end(), std::greater<int>());

        int j = 0, k = 0;

        for(auto i = 0; i < n; i++){
            if(i != 0)
                std::cout << " ";
            if(pos[i]){
                std::cout << negative[j];
                ++j;
            }else{
                std::cout << positive[k];
                ++k;
            }
        }

        std::cout << "\n";
        std::cin >> n;
    }

    return 0;
}