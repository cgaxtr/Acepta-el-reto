#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        std::cout << "Hola mundo.\n";
    }

    return 0;
}
