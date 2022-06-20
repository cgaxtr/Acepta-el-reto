#include <iostream>
#include <iomanip>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t) {

        long int seconds = 0;
        int n;
        std::cin >> n;
        while (n) {
            seconds += n * t;

            std::cin >> n;
        }

        std::cout << std::setw(2) << std::setfill('0') << seconds / 3600;
        std::cout << ":";
        std::cout << std::setw(2) << std::setfill('0') << seconds % 3600 / 60;
        std::cout << ":";
        std::cout << std::setw(2) << std::setfill('0') << seconds % 60;
        std::cout << "\n";
        std::cin >> t;
    }

    return 0;
}