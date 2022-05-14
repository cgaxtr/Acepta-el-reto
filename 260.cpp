#include <iostream>
#include <string>
#include <ios>

int main() {

    //std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int cases;
    int alphabet[26];
    std::string phrase;
    bool anagram;
    int size;

    std::cin >> cases;
    getchar();

    for (auto i = 0; i < cases; i++) {
        std::fill(std::begin(alphabet), std::end(alphabet), 0);
        anagram = true;
        size = 0;

        char c;
        while ((c = getchar()) != '\n') {
            if (c != ' ') {
                alphabet[tolower(c) - 97]++;
                size++;
            }
        }

        while ((c = getchar()) != '\n') {
            if (c != ' ') {
                if (--alphabet[tolower(c) - 97] < 0) anagram = false;
                size--;
            }
        }

        std::cout << (anagram && !size ? "SI" : "NO") << std::endl;
    }

    return 0;
}