#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string catergories[] = {"DESAYUNOS", "COMIDAS", "MERIENDAS", "CENAS", "COPAS"};
    char c; //category
    double p; //price
       
    while(std::cin >> c >> p){
        double total = 0;
        double v[5] = {0};
        int m = 0, t = 0;
        while(c != 'N'){
            switch(c){ 
                case 'D':
                    v[0] += p;
                break;
                case 'A':
                    v[1] += p;
                    ++m;
                break;
                case 'M':
                    v[2] += p;
                break;
                case 'I':
                    v[3] += p;
                break;
                case 'C':
                    v[4] += p;
                break;
            }
            ++t;
            total += p;

            std::cin >> c >> p;
        }

        double min = v[0];
        double max = v[0];
        bool tieMin = false;
        bool tieMax = false;
        int minPos = 0, maxPos = 0;
        for(auto i = 1; i < 5; i++){
            if(v[i] < min){
                minPos = i;
                min = v[i];
                tieMin = false;
            }else if( v[i] == min){
                tieMin = true;
            }

            if(v[i] > max){
                maxPos = i;
                max = v[i];
                tieMax = false;
            }else if(v[i] == max){
                tieMax = true;
            }
        }

        std::cout << (tieMax ? "EMPATE" : catergories[maxPos]) << "#";
        std::cout << (tieMin ? "EMPATE" : catergories[minPos]) << "#";
        std::cout << (v[1] / m > total / t ? "SI\n" : "NO\n");
    }

    return 0;
}