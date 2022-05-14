#include <iostream>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::cin >> s;
    while(s != "FIN"){
        
        int carry = 1;
        int i = s.size() - 1;
        while(i >= 0 && carry){
            if(s[i] == 'F'){
                carry = 1;
                s[i] = '0';
            }else if(s[i] == '9'){
                s[i] = 'A';
                carry = 0;
            }else{
                s[i] += carry;
                carry = 0;
            }

            --i;
        }

        if(carry)
            std::cout << "1";
        std::cout << s << "\n";

        std::cin >> s;
    }
    
    return 0;
}

