#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n){
        bool isAscending = true;
        int a, b;

        std::cin >> a;
        for(auto i = 0; i < n - 1; ++i){
            std::cin >> b;
            if(a >= b)
                isAscending = false;
            a = b;
        }

        std::cout << (isAscending ? "SI\n" : "NO\n");
        std::cin >> n;
    }

    return 0;
}