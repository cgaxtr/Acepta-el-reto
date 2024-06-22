#pragma GCC optimize ("O3")

#include <iostream>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while(n)
    {
        auto z = 0;
        int a, aux = 1;
        while(n >= 10)
        {
            while(n > 0)
            {
                a = n % 10;
                n = n / 10;

                if(a)
                    aux *= a;
                else
                	++z;

            }
            n = aux;
            aux = 1;
        }

        std::cout << n << z << "\n";
        std::cin >> n;
    }
    return 0;
}