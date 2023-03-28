#include <iostream>
#include <iomanip>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int d, n;
    std::cin >> d >> n;
    while(d || n){
        int t = d * n * 144;

        std::cout << t / 86400;
        std::cout  << ":";
        t %= 86400;

        std::cout << std::setw(2) << std::setfill('0') << t / 3600;
        std::cout  << ":";
        t %= 3600;

        std::cout << std::setw(2) << std::setfill('0') << t / 60;
        std::cout  << ":";
        t %= 60;

        std::cout << std::setw(2) << std::setfill('0') << t;
        std::cout  << "\n";

        std::cin >> d >> n;
    }

    return 0;
}