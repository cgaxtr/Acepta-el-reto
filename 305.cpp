#include <iostream>
#include <deque>
#include <algorithm>

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n){
        std::deque<int> a;
        std::deque<int> d;

        int aux;
        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            a.push_back(aux);
        }

        for(auto i = 0; i < n; i++){
            std::cin >> aux;
            d.push_back(aux);
        }

        std::sort(a.begin(), a.end(), std::greater<int>());
        std::sort(d.begin(), d.end(), std::greater<int>());

        int count = 0;
        while(a.size() != 0){
            if(d.front() >= a.front()){
                count++;
                a.pop_front();
                d.pop_front();
            }else{
                a.pop_front();
            }
        }
        std::cout << count << "\n";
    }

    return 0;
}