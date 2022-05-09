#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        std::vector<int> u(6);
        std::vector<int> l(6);

        for(auto j = 0; j < 6; j++){
            std::cin >> u[j];
        }
        for(auto j = 0; j < 6; j++){
            std::cin >> l[j];
        }

        bool diff = false;
        int j = 1;
        while(j < 6 && !diff){
            if(u[j-1] + l[j-1] != u[j] + l[j])
                diff = true;

            ++j;
        }

        std::cout << (diff ? "NO\n" : "SI\n");

    }

    return 0;
}