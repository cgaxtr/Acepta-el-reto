#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(false);

    int c; // cases
    std::vector<std::string> v; //list of people

    std::cin >> c;

    while (c--) {
        v.clear();
        std::string n; //name

        std::cin >> n;
        while (n != "F") {
            v.push_back(n);
            std::cin >> n;
        }

        int a, l; //availables //song length
        std::cin >> a >> l;
        
        if (a == 0) {
            std::cout << "NADIE TIENE CAMA\n";
            continue;
        } else if (a >= v.size()) {
            std::cout << "TODOS TIENEN CAMA\n";
            continue;
        }
            
        int o = 0;
        while (v.size() > a && v.size() > 0) {
            o = (o + l - 1) % v.size();
            v.erase(v.begin() + o);
        }
        
        for (auto i = 0; i < v.size() - 1; i++) {
            std::cout << v[i] << " ";
        }

        std::cout << v[v.size() - 1] << "\n";
    }
}