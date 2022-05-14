#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        int v[10] = {0};
        int n1, n2;
        std::cin >> n1 >> n2;

        for(auto i = 0; i < 7; i++){
            ++v[n1%10];
            n1 /= 10;
        }

        int counter = 0;
        for(auto i = 0; i < 7; i++){
            if(v[n2%10]){
                ++counter;
                --v[n2%10];
            }
            n2 /= 10;
        }

        std::cout << (counter == 7 ? "GANA\n" : "PIERDE\n");
    }

    return 0;
}