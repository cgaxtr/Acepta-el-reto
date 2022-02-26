#include <iostream>

bool isMobileBalanced(int pi, int di, int pd, int dd, int &weight) {

    bool i = true, d = true;
    int pii, dii, pdi, ddi;
    int pid, did, pdd, ddd;

    if (!pi) {
        std::cin >> pii >> dii >> pdi >> ddi;
        i = isMobileBalanced(pii, dii, pdi, ddi, pi);
    }
    
    if (!pd) {
        std::cin >> pid >> did >> pdd >> ddd;
        d = isMobileBalanced(pid, did, pdd, ddd, pd);
    }

    weight = pi + pd;
    
    return pi * di == pd * dd && i && d;
}

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int pi, di, pd, dd, w;
    std::cin >> pi >> di >> pd >> dd;

    while (pi || di || pd || dd) {

        std::cout << (isMobileBalanced(pi, di, pd, dd, w) ? "SI\n" : "NO\n");

        std::cin >> pi >> di >> pd >> dd;
    }
    
}