include <iostream>
#include <iomanip>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    int n;

    std::cin >> c;
    while(c--){
        std::cin >> n;
        int s,m,h;

        s = n % 60;
        n /= 60;
        m = n % 60;
        n /= 60;
        h = n % 60;

        std::cout << std::setw(2) << std::setfill('0') << h << ":";
        std::cout << std::setw(2) << std::setfill('0') << m << ":";
        std::cout << std::setw(2) << std::setfill('0') << s << "\n";
    }

    return 0;
}