#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    int n;
    std::cin >> n;
    std::cin.get();
    for(auto i = 0; i < n; i++){
        std::getline(std::cin, s);

        unsigned long long int points = 0;
        int counter = 10;
        for(auto c : s){
            if(c == 'O'){
                points += counter;
                counter += 10;
            }else{
                counter = 10;
            }
        }

        std::cout << points << "\n";
    }

    return 0;
}