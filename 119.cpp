#include <iostream>
#include <cmath>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	while(n){
        
        int result = 0;
		while(n > 1){
			int aux = std::sqrt(n);

            auto border = (aux - 2) * 4;
            auto subgroup = aux * aux;

            result += 4 * 3;
            result += border * 2;
            result += subgroup - border - 4;

			n -= subgroup;
		}

        if(n == 1)
            result += 5;
	
        std::cout << result << "\n";
		std::cin >> n;
	}

	return 0;
}