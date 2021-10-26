#include <iostream>
#include <unordered_map>
#include <string>
#include <ios>

int main()
{

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string leageName, team1, team2;
    int setsTeam1, setsTeam2, matches;
    std::unordered_map<std::string, int> leage; //key -> name, value -> points

    std::cin >> leageName;

    while (leageName != "FIN") {
        leage.clear();
        matches = 0;
        std::cin >> team1;
        while (team1 != "FIN") {
            matches++;
            std::cin >> setsTeam1 >> team2 >> setsTeam2;

            if (setsTeam1 > setsTeam2) {
                leage[team1] += 2;
                leage[team2] += 1;
            }
            else {
                leage[team1] += 1;
                leage[team2] += 2;
            }

            std::cin >> team1;
        }

        std::string winer;
        bool draw = false;
        int maxPoints = 0;
        for (auto& i : leage) {
            if (i.second > maxPoints) {
                winer = i.first;
                maxPoints = i.second;
                draw = false;
            }
            else if (i.second == maxPoints) {
                draw = true;
            }
        }

        std::cout << (draw ? "EMPATE" : winer) << " " << leage.size() * (leage.size() - 1) - matches << std::endl;

        std::cin >> leageName;
    }

    return 0;
}

