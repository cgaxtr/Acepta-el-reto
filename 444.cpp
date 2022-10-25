#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m, b;
    std::cin >> m >> b;
    while(m || b){
        std::vector<int> v(m);
        for(auto i = 0; i < m; i++){
            std::cin >> v[i];
        }

        int max = 0;
        int current = 0;
        int currentZeros = 0;
        for(auto i = 0; i < m; i++){
			current = 0;
			currentZeros = 0;
            if(v[i] == 1){
                int j = i;
                bool inSequence = true;
                while(j < m && inSequence){
                    if(v[j] == 1){
                        ++current;
                        currentZeros = 0;
                        max = std::max(current, max);
                    }else{
                        if(currentZeros < b){
                            ++currentZeros;
                            ++current;
                        }else{
                            inSequence = false;
                            current = 0;
                            currentZeros = 0;
                        }
                    }
                    ++j;
                }
                i = j - 1;
			}
        }
        
        std::cout << max << "\n";
        std::cin >> m >> b;
    }

}