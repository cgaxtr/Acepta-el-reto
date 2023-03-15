#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> d(3);
    std::vector<int> d2(3);

    for(auto i = 0; i < n; i++){
        
        for(auto j = 0; j < 3; j++){
            std::cin >> d[j];
        }

        for(auto j = 0; j < 3; j++){
            std::cin >> d2[j];
        }

        std::sort(d.begin(), d.end());
        std::sort(d2.begin(), d2.end());

        auto j = 0;
        auto isValid = true;

        while(j < 3 && isValid){
            if(d[j] >= d2[j])
                isValid = false;

            ++j;
        }

        if(isValid)
            std::cout << "SIRVE\n";
        else
            std::cout << "NO SIRVE\n";
    }


    return 0;
}