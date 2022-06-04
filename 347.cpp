#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w, h;
    std::cin >> w >> h;


    while(w || h){
        int counter = 0;

        while(w >= 10 && h >= 10){
            
            int n;
            if(w > h){
                n = w/h;
                w -= h*n;
            }else{
                n = h/w;
                h -= w*n;
            }

            counter += n;
        }

        std::cout << counter << "\n";
        std::cin >> w >> h;
    }

    return 0;
}