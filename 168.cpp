#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<bool> v(n);
        bool found = false;

        int a;
        for(auto i = 0; i < n - 1; i++){
            std::cin >> a;
            v[a-1] = true;
        }

        int i = 0;
        while(i < n && !found){
            if(!v[i])
                found = true;
            else
                ++i;
        }

        std::cout << i + 1<< "\n";
        std::cin >> n;
    }

    return 0;
}