#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n--){
        int r, h; //rabbit horse
        std::cin >> r >> h;

        std::cout << r * 100 / (r + h) << "\n";

    }

    return 0;
}