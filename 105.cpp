#include <iostream>

int main(){
    std::string days[] = {"MARTES", "MIERCOLES", "JUEVES", "VIERNES", "SABADO", "DOMINGO"};
    double v;
    double min;
    bool tieMin;
    double max;
    bool tieMax;
    double sum;
    int iMin;
    int iMax;

    while(std::cin >> v && v != -1){
        min = v, max = v;
        tieMin = false, tieMax = false;
        sum = v, iMin = 0, iMax = 0;

        for(auto i = 1; i < 6; i++){
            std::cin >> v;
            sum += v;

            if(v < min){
                min = v;
                tieMin = false;
                iMin = i;
            }else if(v > max){
                max = v;
                tieMax = false;
                iMax = i;
            }else if(v == min){
                tieMin = true;
            }else if(v == max){
                tieMax = true;
            }
        }

        std::cout << (tieMax ? "EMPATE" : days[iMax]) << " " << (tieMin ? "EMPATE" : days[iMin]) << " " << (v > sum / 6 ? "SI" : "NO") << std::endl;
    }

    return 0;
}