#include <iostream>
#include <iostream>
#include <math.h>

int mcm(int a, int b);

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    long long a, b, dadNumber, gcd;

    std::cin >> a >> b >> dadNumber;
    while(a && b && dadNumber){

        gcd = a * b / mcm(a,b);

        std::cout << dadNumber / gcd << std::endl;
        std::cin >> a >> b >> dadNumber;
    }  

    return 0;
}

int mcm(int a, int b)
{
    return (b == 0) ? a : mcm(b, a % b);
}