#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    while(c--){
        int n, a, b, jU = 0, jD = 0;
        std::cin >> n;
        std::cin >> a;

        for(auto i = 0; i < n - 1; i++){
            std::cin >> b;

            if(a > b)
                ++jD;
            else if (a < b)
                ++jU;

            a = b;
        }
            std::cout << jU << " " << jD << "\n";

    }

    return 0;
}