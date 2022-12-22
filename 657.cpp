#include <iostream>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	for(auto i = 0; i < n; i++){
		int a, b, c;
		std::cin >> a >> b >> c;


		int distAB = abs(a - b);
		if(a < 0 && b > 0)
			--distAB;
		int distBC = abs(c - b);
		if(b < 0 && c > 0)
			--distBC;
		
		if(distAB == distBC)
			std::cout << "EMPATE\n";
		else if(distAB > distBC)
			std::cout << c << "\n";
		else
			std::cout << a << "\n";
		
	}
	
	return 0;
}