#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <sstream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    

    int n;
    std::cin >> n;
    std::cin.get();
    std::string s;
    std::deque<std::string> currentInput;
    std::stack<std::string> back;
    for(auto i = 0; i < n; i++){
        
        std::getline(std::cin, s);
        std::stringstream ss(s);
        ss >> s;
        while(s != "."){

            if (s == "<"){
                if(!currentInput.empty()){
                    back.push(currentInput.back());
                    currentInput.pop_back();
                }
            } else if (s == ">") {
                if(back.empty()){
                    if(!currentInput.empty())
                        currentInput.push_back(currentInput.back());
                }else{
                    currentInput.push_back(back.top());
                    back.pop();
                }
            } else {
                currentInput.push_back(s);
                while(!back.empty())
                    back.pop();
            }

            ss >> s;
        }

        if(!currentInput.empty()){
            std::cout << currentInput.front();
            currentInput.pop_front();

            while(!currentInput.empty()){
                std::cout << " " << currentInput.front();
                currentInput.pop_front();
            }
        }

        std::cout << "\n";

        while(!back.empty())
            back.pop();

    }

    return 0;
}