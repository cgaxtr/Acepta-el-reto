#include <iostream>
#include <string>

int main(){
    int c;
    std::string s;
    std::cin >> c;
    getchar();

    while(c--){
        getline(std::cin, s);
        bool vowels[5] = {false};

        for(auto i : s){
            switch (i){
                case 'a':
                    vowels[0] = true;
                    break;
                case 'e':
                    vowels[1] = true;
                    break;
                case 'i':
                    vowels[2] = true;
                    break;
                case 'o':
                    vowels[3] = true;
                    break;
                case 'u':
                    vowels[4] = true;
                    break;
            }
        }

        int i = 0;
        bool flag = true;
        while(i < 5 && flag){
            flag = vowels[i];
            i++;
        }
        std::cout << (flag ? "SI\n" : "NO\n");
    }

    return 0;
}