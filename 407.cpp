#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c, p, t;
    std::cin >> c >> p >> t;
    while(c || p || t){
    
    int f = p + t;
    if(f > c){
        f = c - (f - c);
    }
    
    std::cout << f << "\n";
    std::cin >> c >> p >> t;
    }

    return 0;
}
