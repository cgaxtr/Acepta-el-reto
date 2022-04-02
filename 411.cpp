#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w;
    std::cin >> w;
    while(w){
        bool finish = false;
        int counter = 0;
        int e;
        while(std::cin >> e && e){
            if(!finish){
                if(w - e < 0){
                    finish = true;
                }else{
                    w -= e;
                    counter++;
                }
            }
        }
        std::cout << counter << "\n";
        std::cin >> w;
    }

    return 0;
}