#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin .tie(nullptr);

    std::string a, b;
    std::cin >> a >> b;
    while(a != "0" || b != "0"){
        
        int i = a.length() - 1, j = b.length() - 1;

        int carry = 0;
        int count = 0;
        while(i >= 0 && j >= 0){
            if(a[i] - '0' + b[j] - '0' + carry >= 10){
                carry = 1;
                ++count;
            }else{
                carry = 0;
            }

            --i;
            --j;

        }

        while(i >= 0 && carry){
            if(a[i] - '0' + carry >= 10){
                ++count;
                carry = 1;
            }else{
                carry = false;
            }
            --i;
        }

        while(j >= 0 && carry){
            if(b[j] - '0' + carry >= 10){
                ++count;
                carry = 1;
            }else{
                carry = false;
            }
            --j;
        }

        std::cout << count << "\n";
        std::cin >> a >> b;
    }
    return 0;
}