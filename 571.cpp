#include <iostream>
#include <stack>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n){
        std::stack<std::pair<std::string, int>> s;
        std::string d; //date
        int p;         //passed away

        for(auto i = 0; i < n; i++){
            std::cin >> d >> p;

            auto found = false;
            while(!s.empty() && !found){
                if(s.top().second > p)
                    found = true;
                else
                    s.pop();
            }

            if(found)
                std::cout << s.top().first << "\n";
            else
                std::cout << "NO HAY\n";

            s.push({d,p});

        }
        std::cout << "---\n";
    }

    return 0;
}