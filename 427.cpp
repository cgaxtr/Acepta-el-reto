#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;
    std::cin.get();
    while(n--){
        std::string name, relationship;
        std::getline(std::cin, name);
        std::getline(std::cin, relationship);


        if(name == "Luke" && relationship == "padre")
            std::cout << "TOP SECRET\n";
        else
            std::cout << name << ", yo soy tu " << relationship << "\n";
    }

    return 0;
}