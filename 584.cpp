#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	unsigned long long int h, p;
	int s;
	for(auto i = 0; i < n; i++){
		std::cin >> h >> p >> s;

		bool flag1 = (h / s) >= p;
		bool flag2 = h <= (p * s);

		if(flag1 && flag2)
			std::cout << "AMBAS\n";
		else if(flag1)
			std::cout << "ENCENDIDOS\n";
		else
			std::cout << "HORAS\n";
	}

	return 0;
}