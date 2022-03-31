#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int start, end;
    int a, b;
    std::cin >> a;
    while(a != 0){
        bool inSequence = false;
        std::cin >> b;
        while(b != 0){
            if(b == a + 1){
                if(inSequence){
                    end = b;
                }else{
                    start = a;
                    end = b;
                    inSequence = true;
                }
            }else{
                if(inSequence){
                    std::cout << start << "-" << end << ",";   
                    inSequence = false;
                }else{
                    std::cout << a << ",";
                }
            }

            a = b;
            std::cin >> b;
        }

        if(inSequence){
            std::cout << start << "-" << end;
        }else{
            std::cout << a;
        }

        std::cout << "\n";
        std::cin >> a;
    }

    return 0;
}