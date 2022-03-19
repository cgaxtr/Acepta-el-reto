#include <iostream>

int main()
{
    std::cin.sync_with_stdio(false);
	std::cin.tie(nullptr);

    int cases;
    std::cin >> cases;

    bool nine;
    bool zero;
    float mark;
    for(int i = 0; i < cases; i++){
        nine = false;
        zero = false;
        for (int j = 0; j < 5; j++){
            std::cin >> mark;
            if (mark >= 9.0)
                nine = true;
            if (mark == 0.0)
                zero = true;

        }

        if(zero && !nine)
            std::cout << "SUSPENSO DIRECTO" << std::endl;
        else
            std::cout << "MEDIA" << std::endl;

    }

    return 0;
}