#include <iostream>
#include <string>

int main(){

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int n;
	std::cin >> n;
	while(n){

		int j = 0;
		std::string s;
		int score[] = {0, 0};
		
		for(auto i = 0; i < n; i++){
			std::cin >> s;

			if(s == "PIC"){
				j = ++j % 2;
			}
			else if(s == "PONG!"){
				++score[j];
			}
		}

		std::cout << score[0] << " " << score[1] << "\n";
		std::cin >> n;
	}

	return 0;
}
