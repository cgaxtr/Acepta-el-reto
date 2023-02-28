#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<int> y = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int m, d;
    char aux;

    std::cin >> m >> aux >> d;

    while(m != 0 || d != 0){
        auto valid = false;
        if(m > 12 || m <= 0)
            std::cout << "NO\n";
        else{
            if(d >= 1 && d <= y[m - 1])
                std::cout << "SI\n";
            else
                std::cout << "NO\n";
        }
        std::cin >> m >> aux >> d;
    }

    return 0;
}