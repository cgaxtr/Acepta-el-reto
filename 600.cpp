#include <iostream>
#include <vector>
#include <climits>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r, c;
    std::cin >> r >> c;
    while(r || c){
        std::vector<std::vector<int>> m(r, std::vector<int>(c));
        std::vector<std::pair<int,int>> rows(r, std::make_pair(INT_MAX, INT_MIN)); //min,max
        std::vector<std::pair<int,int>> columns(c, std::make_pair(INT_MAX, INT_MIN)); //min,max

        for(auto i = 0; i < r; i++){
            for(auto j = 0; j < c; j++){
                std::cin >> m[i][j];
                if(m[i][j] < rows[i].first)
                    rows[i].first = m[i][j];
                if(m[i][j] > rows[i].second)
                    rows[i].second = m[i][j];

                if(m[i][j] < columns[j].first)
                    columns[j].first = m[i][j];
                if(m[i][j] > columns[j].second)
                    columns[j].second = m[i][j];
            }
        }
        
        bool found = false;
        int i = 0;
        int j = 0;
        while(i < r && !found){
            j = 0;
            while(j < c && !found){
                if(m[i][j] <= rows[i].first && m[i][j] >= columns[j].second || m[i][j] >= rows[i].second && m[i][j] <= columns[j].first)
                    found = true;
                ++j;
            }
            ++i;
        }

        std::cout << (found ? "SI\n" : "NO\n");
        std::cin >> r >> c;
    }

    return 0;
}