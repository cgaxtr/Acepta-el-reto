#include <iostream>
#include <vector>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int e;
    while(std::cin >> e && e){

        int n; std::cin >> n;
        std::vector<int> v(n);

        int src, dst;
        for(auto i = 0; i < e; i++){
            std::cin >> src >> dst;

            v[src - 1]++;
            v[dst - 1]++;
        }

        int oddGrades = 0;
        for(auto i : v){
            if(i % 2 != 0)
                oddGrades++;
        }

        std::cout << (oddGrades <= 2 ? "SI\n" : "NO\n");
    }


    return 0;
}