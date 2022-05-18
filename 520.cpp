#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, l;
    std::cin >> n >> l;
    while(n || l){
        int a, b;
        std::cin >> a >> b;
        while(a || b){
            
            if(a == l)
                l = b;
            else if(b == l)
                l = a;
            

            std::cin >> a >> b;
        }

        std::cout << l << "\n";
        std::cin >> n >> l;
    }

    return 0;
}