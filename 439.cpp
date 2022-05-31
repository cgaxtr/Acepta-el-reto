#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char first, second, aux;
    int valueF, valueS;
    int n;
    std::cin >> n;
    for(auto i = 0; i < n; i++){
        std::cin >> first >> aux >>  valueF >> second >> aux >> valueS;

        if(first == 'D' && second == 'T')
            std::cout << "V=" << valueF / valueS << "\n";
        else if(first == 'T' && second == 'D')
            std::cout << "V=" << valueS / valueF << "\n";

        else if(first == 'D' && second == 'V')
            std::cout << "T=" << valueF / valueS << "\n";
         else if(first == 'V' && second == 'D')
            std::cout << "T=" << valueS / valueF << "\n";

        else if(first == 'T' && second == 'V')
            std::cout << "D=" << valueF * valueS << "\n";
        else if(first == 'V' && second == 'T')
            std::cout << "D=" << valueS * valueF << "\n";
        
    }

    return 0;
}