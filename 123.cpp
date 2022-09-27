#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string pronoms[] = { "yo ", "tu ", "el ", "nosotros ", "vosotros ", "ellos " };

    std::string m[3][3][6] = {
        {
            { "o", "as", "a", "amos", "ais", "an"},
            { "e", "aste", "o", "amos", "asteis", "aron"},
            { "are", "aras", "ara", "aremos", "areis", "aran"}
        },
        {
            { "o", "es", "e", "emos", "eis", "en"},
            { "i", "iste", "io", "imos", "isteis", "ieron"},
            { "ere", "eras", "era", "eremos", "ereis", "eran"}
        },
        {
            { "o", "es", "e", "imos", "is", "en"},
            { "i", "iste", "io", "imos", "isteis", "ieron"},
            { "ire", "iras", "ira", "iremos", "ireis", "iran"}
        },
    };

    std::string s;
    char tense;
    
    std::cin >> s >> tense;
    while(tense != 'T'){

        std::string verb = s.substr(0, s.length() - 2);

        int i,j;
        switch(s[s.length()-2]){
            case 'a':
                i = 0;
            break;
            case 'e':
                i = 1;
            break;
            case 'i':
                i = 2;
            break;
        }

        switch (tense){
            case 'A':
                j = 0;
            break;
            case 'P':
                j = 1;
            break;
            case 'F':
                j = 2;
            break;
        }



        for(auto k = 0; k < 6; k++){
            std::cout << pronoms[k] << verb << m[i][j][k] << "\n";
        }
        std::cin >> s >> tense;
    }


    return 0;
}