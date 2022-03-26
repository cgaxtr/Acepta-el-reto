#include <iostream>
#include <iomanip>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--){
        int h,m,s;
        char aux;

        std::cin >> h >> aux >> m >> aux >> s;

        if(s > 0)
            m++;
        if(m > 0)
            h++;
        
        std::cout << std::setfill('0') << std::setw(2) << (24 - h) % 24 << ':';
        std::cout << std::setfill('0') << std::setw(2) << (60 - m) % 60 << ':';
        std::cout << std::setfill('0') << std::setw(2) << (60 - s) % 60 << "\n";
    }

    return 0;
}