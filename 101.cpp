#include <iostream>
#include <vector>
#include <unordered_map>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n){
        std::vector<std::vector<int>> m(n, std::vector<int>(n));
        std::vector<int> sumRows(n);
        std::vector<int> sumCols(n);
        std::unordered_map<int,int> serie;

        for(auto i = 0; i < n; i++){
            for(auto j = 0; j < n; j++){
                std::cin >> m[i][j];
                sumRows[i]+= m[i][j];
                sumCols[j]+= m[i][j];
                ++serie[m[i][j]];
            }
        }

        bool diabolic = true;
        //check rows and cols
        int cm = sumRows[0];
        for(auto i = 0; i < n && diabolic; i++){
            if(cm != sumRows[i] || cm != sumCols[i])
                diabolic = false;
        }

        //check main diagonal
        int sum = 0;
        for(auto i = 0; i < n && diabolic; i++){
            sum += m[i][i];
        }
        diabolic &= sum == cm;

        //check second diagonal
        sum = 0;
        int debug = 0;
        int debug2 = 0;
        for(int i = n-1; i >= 0 && diabolic; i--){
            debug = i;
            debug2 = n-1 - i;
            sum += m[n-1 - i][i];
        }
        diabolic &= sum == cm;

        if(diabolic){
            //check 1...n^2 serie
            bool esoteric = true;
            for(auto i = 1; i <= n*n && esoteric; i++){
                if(serie[i] != 1)
                    esoteric = false;
            }
            
            int cm2 = 4*cm/n;

            if(cm2 != m[0][0] + m[0][n-1] + m[n-1][0] + m[n-1][n-1])
                esoteric = false;
            
            int center = n / 2;
            if(n % 2 == 0){
                esoteric &= 2*cm2 == m[0][center - 1] + m[0][center] + m[center - 1][0] + m[center - 1][n-1] + m[center][0] + m[center][n-1] + m[n-1][center-1] + m[n-1][center];
                esoteric &= cm2 == m[center - 1][center - 1] + m[center - 1][center] +m[center][center - 1] + m[center][center];
            }else{
                int sum = m[0][center] + m[center][0] + m[center][n-1] + m[n-1][center];
                esoteric &= cm2 == m[0][center] + m[center][0] + m[center][n-1] + m[n-1][center];
                esoteric &= cm2 == 4 * m[center][center];
            }
            
            if(esoteric)
                std::cout << "ESOTERICO\n";
            else
                std::cout << "DIABOLICO\n";

        }else{
            std::cout << "NO\n";
        }

        std::cin >> n;
    }

    return 0;
}