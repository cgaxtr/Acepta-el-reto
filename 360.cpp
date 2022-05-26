#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n--){
        int i, m;
        std::cin >> i >> m;

        int counter = 0;
        int vol = i;

        int a;
        std::cin >> a;
        while(a != -1){
            vol -= a;

            if(vol < m){
                ++counter;
                vol = i;
            }
            std::cin >> a;
        }

        std::cout << counter << "\n";
    }

    return 0;
}