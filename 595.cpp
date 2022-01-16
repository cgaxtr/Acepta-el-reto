#include <iostream>

int main()
{
    std::cin.tie(0);

    int cases;
    int idProblem;

    std::cin >> cases;

    for(auto i = 0; i < cases; i++){
        std::cin >> idProblem;

        std::cout << idProblem / 100 << std::endl;
    }

    return 0;
}