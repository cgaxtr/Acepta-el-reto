#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, y, c;
    std::string s;
    std::cin >> n;

    for(auto i = 0; i < n; i++){
        std::cin >> m >> y >> c;
        std::cin >> s;
        std::cin.get();

        int j = 0;
        bool valid = true;
        while(j < s.size() && valid){
            switch(s[j]){
                case 'M':
                    --m;
                break;
                case 'A':
                    --y;
                break;
                case 'C':
                    --c;
                break;
                case 'R':
                    --m;
                    --y;
                break;
                case 'N':
                    --m;
                    --y;
                    --c;
                break;
                case 'V':
                    --y;
                    --c;
                break;
                case 'L':
                    --m;
                    --c;
                break;
            }
            if(m < 0 || y < 0 || c < 0)
                valid = false;
            ++j;
        }

        if(valid)
            std::cout << "SI " << m << " " << y << " " << c << "\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}