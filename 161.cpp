#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n != 0){
        std::vector<int> v(n);

        for(auto i = 0; i < n; i++){
            std::cin >> v[i];
        }
        
        std::sort(v.begin(), v.end());

        int mid = n / 2;

        if(n % 2 == 0)
            std::cout << ((v[mid] + v[mid -1]) / 2.0) * 2;
        else
            std::cout << v[mid] * 2;
        std::cout << "\n";

        std::cin >> n;
    }

    return 0;
}