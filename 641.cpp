#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long int i, n;
    std::cin >> i >> n;
    while(i && n){
        std::vector<int> v(n);

        for(auto j = 0; j < n; j++){
            std::cin >> v[j];
        }

        long long int j = 0;
        long long int k = 0;
        long long int acum = 0;
        long long int max = 0;
        while(j < i){
            acum += v[j];
            ++j;
        }
        
        max = acum;

        for(j, k = 0; j < n; j++, k++){
            acum += v[j];
            acum -= v[k];

            max = std::max(max, acum);
        }

        std::cout << max << "\n";
        std::cin >> i >> n;
    }

    return 0;
}