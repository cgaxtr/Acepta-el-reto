#include <iostream>
#include <vector>
#include <algorithm>

struct date {
    int day;
    int month;
    int year;

    bool operator<(const date &d) const {
        return (d.month < month) || (d.month == month&& d.day < day);
    }

    bool operator==(const date &d) const{
        return d.month == month && d.day == day;
    }

};

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while (n) {

        std::vector<date> v(n);
        char aux;
        for (auto i = 0; i < n; i++) {
            std::cin >> v[i].day >> aux >> v[i].month >> aux >> v[i].year;
        }

        std::sort(v.begin(), v.end());

        int i = 1;
        auto found = false;

        while (i < n && !found) {

            found = v[i - 1] == v[i];

            ++i;
        }

        std::cout << (found ? "SI\n" : "NO\n");
        std::cin >> n;
    }

    return 0;
}