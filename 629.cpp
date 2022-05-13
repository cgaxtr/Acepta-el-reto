#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<int> v(n);

        for(auto i = 0; i < n; i++){
            std::cin >> v[i];
        }

        int sum = 0;
        int max = v[n - 1];
        for(int i = n - 2; i >= 0; i--){

            if(max > 0){
                ++sum;
                --max;
            }
            max = std::max(v[i], max);

        }

        std::cout << sum << "\n";
        std::cin >> n;
    }

    return 0;
}