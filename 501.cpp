#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int td, ta, dd, da, no;
    while(std::cin >> td >> ta >> dd >> da >> no){

        for(auto i = 0; i < no; i++){
            std::vector<int> d(std::min(td, dd));
            std::vector<int> a(std::min(ta, da));

            for(auto j = 0; j < d.size(); j++){
                std::cin >> d[j];
            }

            for(auto j = 0; j < a.size(); j++){
                std::cin >> a[j];
            }

            std::sort(d.begin(), d.end(), std::greater<int>());
            std::sort(a.begin(), a.end(), std::greater<int>());

            for(auto j = 0; j < std::min(d.size(), a.size()); j++){
                if(a[j] > d[j])
                    --td;
                else
                    --ta;
            }
        }

        std::cout << td << " " << ta << "\n";

    }

    return 0;
}

