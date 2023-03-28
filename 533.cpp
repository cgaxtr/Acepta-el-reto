#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        int k;
        std::cin >> k;

        auto found = false;
        int j = 0;
        double total = 0.0;
        int aux;
        std::cin >> aux;
        while(aux){
            
            total += aux * 0.125;
            if(total >= k)
                found = true;
            else
                ++j;

            std::cin >> aux;
        }

        if(found)
            std::cout << j + 1 << "\n";
        else
            std::cout << "SIGAMOS RECICLANDO\n";
    }


    return 0;
}