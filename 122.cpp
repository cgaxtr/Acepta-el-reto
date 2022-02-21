#include <iostream>

int main(){
    
	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	
    int a, b, i = 0;
    std::cin >> a; 
    while(a != -1){
        int bestStart = -1, bestKm = 0, currentStart = -1, currentMaxKm = 0;
        std::cin >> b; 
        while(b != -1){

            if(a == b){
                if(currentStart == -1) currentStart = i;
            currentMaxKm++;
            }else{
                if(currentMaxKm > bestKm){
                    bestKm = currentMaxKm;
                    bestStart = currentStart;
                }
                   
                
                currentMaxKm = 0;
                currentStart = -1;
            }

            a = b;
            std::cin >> b;
            i++;
       }

        if(currentMaxKm > bestKm){
            bestKm = currentMaxKm;
            bestStart = currentStart;
        }

        if(bestStart != -1){
            std::cout << bestStart << " " << bestKm << "\n";
        }else{
            std::cout << "HOY NO COMEN\n";
        }

        std::cin >> a;
        i = 0;
    }

    return 0;
}