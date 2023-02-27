#include <iostream>
#include <climits>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int year, n;
    std::string book;
    while(std::cin >> year){
        int aux;
        std::string bookAux;
        auto best = INT_MAX;
        std::string bestBook;
        auto c = 0;
        
        std::cin.get();
        std::getline(std::cin, book);
        std::cin >> n;
        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            std::cin.get();
            std::getline(std::cin, bookAux);

            if(aux >= year){
                ++c;
                if(aux < best){
                    best = aux;
                    bestBook = bookAux;
                }
            }
        }
        
        if(c == n)
            std::cout << "TODAS\n";
        else if (c == 0)
            std::cout << "NINGUNA\n";
        else
            std::cout << bestBook << "\n";
    }

    return 0;
}