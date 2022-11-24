#include <iostream>
#include <vector>

int main(){

    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

	std::vector<char> rows {'h','g','f','e','d','c','b','a'};

	int r, c;
    std::cin >> r >> c;
	while(r != 0 && c != 0){
		std::cout << rows[r-1] << c << "\n";
        std::cin >> r >> c;
	}

	return 0;
}