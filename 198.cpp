#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while(std::getline(std::cin, s)){
        
        std::stack<long> stack;
        std::queue<long> queue;

        bool errorStack = false;
        bool errorQueue = false;
        long a, b;
        for(auto c : s){
            switch(c){
                case '*':
                    if(!errorStack){
                        b = stack.top();
                        stack.pop();
                        a = stack.top();
                        stack.pop();
                        stack.push(a * b);
                    }

                    if(!errorQueue){
                        b = queue.front();
                        queue.pop();
                        a = queue.front();
                        queue.pop();
                        queue.push(a * b);
                    }
                break;

                case '/':
                    if(!errorStack){
                        b = stack.top();
                        stack.pop();
                        a = stack.top();
                        stack.pop();
                        if(b != 0)
                            stack.push(a / b);
                        else
                            errorStack = true;
                    }

                    if(!errorQueue){
                        b = queue.front();
                        queue.pop();
                        a = queue.front();
                        queue.pop();

                        if(b != 0)
                            queue.push(a / b);
                        else
                            errorQueue = true;
                    }
                break;

                case '+':
                    if(!errorStack){
                        b = stack.top();
                        stack.pop();
                        a = stack.top();
                        stack.pop();
                        stack.push(a + b);
                    }
                    if(!errorQueue){
                        b = queue.front();
                        queue.pop();
                        a = queue.front();
                        queue.pop();
                        queue.push(a + b);
                    }
                break;

                case '-':
                    if(!errorStack){
                        b = stack.top();
                        stack.pop();
                        a = stack.top();
                        stack.pop();
                        stack.push(a - b);
                    }
                    if(!errorQueue){
                        b = queue.front();
                        queue.pop();
                        a = queue.front();
                        queue.pop();
                        queue.push(a - b);
                    }
                    break;

                default:
                stack.push(c - 48);
                queue.push(c - 48);
            }

        }

        if(errorStack && errorQueue)
            std::cout << "ERROR = ERROR";
        else if(errorStack)
            std::cout << "ERROR != " << queue.front();
        else if(errorQueue)
            std::cout << stack.top() << " != ERROR";
        else if(queue.front() != stack.top())
            std::cout << stack.top() << " != " << queue.front();
        else
            std::cout << stack.top() << " = " << queue.front();
        std::cout << "\n";
    }

    return 0;
}