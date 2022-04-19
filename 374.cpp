#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--){
        unsigned long long int min, max, aux;
        int nMin, nMax;
        std::cin >> aux;
        min = aux, max = aux;
        nMin = 1, nMax = 1;

        std::cin >> aux;
        while(aux){
            if (aux < min){
                min = aux;
                nMin = 1;
            }else if(aux == min){
                ++nMin;
            }
            if(aux > max){
                max = aux;
                nMax = 1;
            }else if(aux == max){
                ++nMax;
            }

            std::cin >> aux;
        }

        std::cout << min << " " << nMin << " " << max << " " << nMax << "\n";

    }

    return 0;
}

