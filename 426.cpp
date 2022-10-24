#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n != 0){
        long int sum = n;
        int c = 1;
        std::cin >> n;
        while(n != 0){
            ++c;
            sum += n;
            std::cin >> n;
        }

        if(sum % c == 0)
            std::cout << "REPARTO JUSTO\n";
        else
            std::cout << "IMPOSIBLE\n";
        std::cin >> n;
    }

    return 0;
}