#include <iostream>
#include <string>
#include <unordered_map>
#include <map>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while (n--) {
        std::map<int, std::pair<std::string, int>> prog;
        std::unordered_map<int, int> transl;
        std::string inst;
        int nl, dl, pc = 10;

        std::cin >> nl;
        while (nl != 0) {
            std::cin >> inst;

            if (inst != "RETURN") {
                std::cin >> dl;
            } else {
                dl = -1;
            }

            transl.insert(std::make_pair(nl, pc));
            prog.insert(std::make_pair(nl, std::make_pair(inst, dl)));

            pc += 10;
            std::cin >> nl;
        }

        for (auto i : prog) {
            std::cout << transl[i.first] << " " << i.second.first;
            if (i.second.second != -1) {
                std::cout << " " << transl[i.second.second];
            }

            std::cout << "\n";
        }

        std::cout << "---\n";

    }
}