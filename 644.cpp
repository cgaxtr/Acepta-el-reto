#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int y;
    std::cin >> y;
    while(y != 0){
        
        int a = y % 19;
        int b = y % 4;
        int c = y % 7;

        int d = (19*a + 24)%30;
        int e = (2*b + 4*c + 6*d + 5)%7;

        if(d + e < 10){
            std::cout << d + e + 22 << " de marzo\n";
        }else{
            int aux = d + e - 9;
			
            if(aux == 26)
                std::cout << "19 de abril\n";
            else if(aux == 25 && d == 28)
                std::cout << "18 de abril\n";
            else
                std::cout << aux << " de abril\n";
        }

        std::cin >> y;
    }

    return 0;
}