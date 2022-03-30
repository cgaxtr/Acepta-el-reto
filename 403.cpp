#include <iostream>

int main(){
  
  	std::ios::sync_with_stdio(false);
  	std::cin.tie(nullptr);

    int c;
    std::cin >> c;
    
    while(c--){
        double d, n, area;

        std::cin >> d >> n;
        area = d / n; 

        if(area >= 90 * 45 && area <= 90 * 120){
            std::cout << "SI\n";
        }else{
            std::cout << "NO\n";
        }
    }

    return 0;
}