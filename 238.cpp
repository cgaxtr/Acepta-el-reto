#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int b, t, aux;
    std::cin >> b >> t;

    while(b || t){
        std::vector<int> v(t, 0);
        std::vector<std::vector<int>> v2(t);
        int aux;

        for(auto i = 0; i < b; i++){
            std::cin >> aux;
            v[i%t] += aux;
            v2[i%t].push_back(aux);
        }

        for(auto i = 0; i < t; i++){
            std::cout << v[i] << ":";
            if(!v2[i].empty()){
                std::cout << " ";
                for(int j = 0; j < v2[i].size() - 1; j++){
                std::cout << v2[i][j] << " ";
                }
                std::cout << v2[i][v2[i].size() - 1];
            }
            std::cout << "\n";
        }

        std::cout << "---\n";
        std::cin >> b >> t;
    }
    return 0;
}