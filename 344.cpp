#include <iostream>

int main()
{

    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (auto i = 0; i < n; i++) {

        int w;
        std::cin >> w;

        char c;
        auto j = 0;
        int h = 0, m = 0;
        while (j < w * 2) {
            c = getchar();

            switch (c)
            {

            case 'H':
                h++;
                j++;
                break;
            case 'M':
                m++;
                j++;
                break;
            }
        }

        std::cout << (h == m ? "POSIBLE\n" : "IMPOSIBLE\n");

    }
}