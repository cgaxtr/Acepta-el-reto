#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n--){
        int i, a, c, e, r;
        std::cin >> i >> a >> c >> e >> r;
        std::cout << i*6 + a*8 + c*10 + e*r*2 << "\n";

    }


    return 0;
}