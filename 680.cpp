#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    for(auto i = 0; i < n; i++){

        int l, a, b;
        std::cin >> l >> a >> b;

        if(a < l && b >= a)
            std::cout << "IMPOSIBLE\n";
        else{
            auto count = 0;
            auto finished = false;
            while(!finished){
                l -= a;
                if(l <= 0)
                    finished = true;
                
                l += b;
                ++count;
            }

            std::cout << count << "\n";
        }
    }

    return 0;
}