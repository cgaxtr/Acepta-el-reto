#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<char> dayOfWeek = {'L','M','X','J','V','S','D'};

    int c;
    std::cin >> c;

    for(auto i = 0; i < c; i++){
        std::vector<int> days(7);

        char aux;
        int n;
        std::cin >> n;
        for(auto j = 0; j < n; j++){
            for(auto k = 0; k < 7; k++){
                std::cin >> aux;
                if(aux == '*'){
                    ++days[k];
                }
            }
        }

        int min = days[0];
        int day = 0;
        for(auto j = 1; j < 7; j++){
            if(days[j] < min){
                min = days[j];
                day = j;
            }
        }

        std::cout << dayOfWeek[day] << " " << min + 1 << "\n";
    }

    return 0;
}