#include <iostream>
#include <set>
#include <string>

int main() {

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int meals;
    std::set<std::string> eaten, notEaten;

    std::cin >> meals;
    std::string ingredient;
    bool isEaten;

    while (meals != 0) {
        eaten.clear();
        notEaten.clear();

        for (auto i = 0; i < meals; i++) {
            std::cin >> ingredient;
            (ingredient == "SI:") ? isEaten = true : isEaten = false;
            std::cin >> ingredient;
            while (ingredient != "FIN") {
                if (isEaten) {
                    eaten.insert(ingredient);
                    auto pos = notEaten.find(ingredient);
                    if (pos != notEaten.end())
                        notEaten.erase(pos);
                }
                else {

                    if (eaten.find(ingredient) != eaten.end()) {
                        if(notEaten.find(ingredient) != notEaten.end())
                            notEaten.erase(notEaten.find(ingredient));
                    }
                    else {
                        notEaten.insert(ingredient);
                    }
                }

                std::cin >> ingredient;
            }
        }

        auto i = 0;
        for (auto &s : notEaten) {
            std::cout << s;
            if(i != notEaten.size() - 1)
                std::cout << ' ';
            i++;
        }
        std::cout << "\n";

        std::cin >> meals;
    }

    return 0;
}