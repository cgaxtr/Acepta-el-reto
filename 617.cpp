#include <iostream>
#include <string>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c;
    std::cin >> c;

    for(auto i = 0; i < c; i++){
        int n;
        std::cin >> n;
        std::vector<std::string> v(n);

        for(auto j = 0; j < n; j++){
            std::cin >> v[j];
        }

        std::string s;
        for(auto j = 0; j < 3; j++){
            for(auto k = 0; k < n; k++)
            s += v[k][j];
        }

        std::cout << s << "\n";

    }

    return 0;
}