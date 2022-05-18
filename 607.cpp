#include <iostream>
int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n--){
        int c;
        std::cin >> c;

        int sum = 1;
        int initial = 1;
        int counter = 0;
        while(sum < c){
            sum += initial;
            initial += initial;
            ++counter;
        }

        std::cout << counter << "\n";
    }

    return 0;
}