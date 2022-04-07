#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    std::cin >> c;
    while(c != 'F'){
        
        char whoServe = 'A';
        int points[] = {0, 0};
        bool printed = false;
        
        while(c != 'F'){
            
            if(c == whoServe)
                points[c - 'A']++;
            else
                whoServe = c;

            if((points[0] >= 9 || points[1] >= 9) && abs(points[0] - points[1]) >= 2){
                std::cout << points[0] << "-" << points[1];
                points[0] = 0;
                points[1] = 0;
                printed = true;
            }

            std::cin >> c;

            if(c != 'F' && printed){
                std::cout << " ";
                printed = false;
            }

            if(c == 'F' && !printed){
                std::cout <<  points[0] << "-" << points[1];
            }
        }

        std::cout << "\n";
        std::cin >> c;
    }


    return 0;
}