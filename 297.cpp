#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    
    while(n--){
        
        int v, t = 0;
        std::cin >> v;
        std::string s;
        while(v){
            std::cin >> s;

            if(s == "da")
                t += v*10;
            else if(s == "h")
                t += v*100;
            else if(s == "k")
                t += v*1000;
            else if(s == "M")
                t += v*1000000;
            else if(s == "G")
                t += v*1000000000;
            else
                t +=v;
            std::cin >> v;
        }

        if(t % 1000000000 == 0)
            std::cout << t / 1000000000 << " G\n";
        else if(t % 1000000 == 0)
            std::cout << t / 1000000 << " M\n";
        else if(t % 1000 == 0)
            std::cout << t / 1000 << " k\n";
        else if(t % 100 == 0)
            std::cout << t / 100 << " h\n";
        else if(t % 10 == 0)
            std::cout << t / 10 << " da\n";
        else
            std::cout << t << " o\n";

    }

    return 0;
}