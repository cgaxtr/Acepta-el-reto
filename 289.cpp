#include <iostream>
#include <queue>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n != 0){
         std::priority_queue<long long int, std::vector<long long int>, std::greater<long long int>> numbers;
        long long int a;
        for(auto i = 0; i < n; i++){
            std::cin >> a;
            numbers.push(a);
        }

        long long int res = 0;
        long long int n1, n2;
        long long int aux;
        while(numbers.size() > 1){
            n1 = numbers.top();
            numbers.pop();
            n2 = numbers.top();
            numbers.pop();

            aux = n1 + n2;
            res += aux;
            numbers.push(aux);
        }
        
        std::cout << res << "\n";
        std::cin >> n;
    }

    return 0;
}