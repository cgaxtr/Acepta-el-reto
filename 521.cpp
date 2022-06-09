#include <iostream>
#include <set>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int p, l, a;
    std::cin >> p >> l >> a;
    while(p || l ||a){
        std::set<std::pair<int,char>> m;

        for(auto i = 0; i < a; i++){
            int n;
            char c;
            std::cin >> n >> c;
            m.insert({n,c});
        }
        
        int min = (p*l % 2 == 0 ? p*l/2 : p*l/2 +1);
        std::cout << (m.size() >= min ? "EMPEZAMOS\n" : "ESPERAMOS\n");
        std::cin >> p >> l >> a;
    }

    return 0;
}