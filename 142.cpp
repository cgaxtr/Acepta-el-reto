#include <iostream>
#include <deque>

int main(){

    int n,s;
    std::cin >> n >> s;
    while(n || s){
        std::deque<int> c;
        for(auto i = 1; i <= n; i++){
            c.push_back(i);
        }

        while(c.size() > 1){
            for(auto i = 0; i < s; i++){
                c.push_back(c.front());
                c.pop_front();
            }

            c.pop_front();
        }

        std::cout << c.front() << "\n";
        std::cin >> n >> s;
    }

    return 0;
}