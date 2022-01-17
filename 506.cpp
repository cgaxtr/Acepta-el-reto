#include <iostream>

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, a, b;
    char aux;
    std::cin >> c;

    while(c--){
        std::cin >> a >> aux >> b;

        std::cout << (a-b >= 0 ? "BIEN\n" : "MAL\n");
    }    

    return 0;
}