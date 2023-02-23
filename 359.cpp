#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, aux;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        auto m = 0, s = 0; // mussel-shell

        std::cin >> aux;
        while(aux != -1){
            ++s;
            m += aux;

            std::cin >> aux;
        }

        if(s == m)
            std::cout << "Justo\n";
        else if(m > s)
            std::cout << "Suerte\n";
        else
            std::cout << "Timo\n";
    }

    return 0;
}