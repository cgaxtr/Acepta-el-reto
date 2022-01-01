#include <stack>
#include <iostream>
#include <deque>
#include <ios>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(false);

    int s; //size pancake
    std::stack<int> st;
    while(std::cin >> s && s != -1){
        st.push(s);
        while(std::cin >> s && s != -1)
        st.push(s);

        int c;
        std::cin >> c;
        std::deque<int> dq;

        for(auto i = 0; i < c; i++){
            int n;
            std::cin >> n;

            for(auto j = 0; j < n; j++){
                dq.push_back(st.top());
                st.pop();
            }

            for(auto j = 0; j < n; j++){
                st.push(dq.front());
                dq.pop_front();
            }

        }

        std::cout << st.top() << std::endl;
    }
    
    return 0;
}