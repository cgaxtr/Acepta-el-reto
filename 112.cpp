#include <iostream>


int main() {

	std::ios_base::sync_with_stdio(false);

	//distance(meters) maxSpeed(Km/h) time(seconds)
	double distance, maxSpeed, time;

	std::cin >> distance;
	std::cin >> maxSpeed;
	std::cin >> time;


	while (distance != 0 || maxSpeed != 0 || time != 0) {

		if (distance <= 0 || maxSpeed <= 0 || time <= 0) {
			std::cout << "ERROR" << std::endl;
		}
		else {

			distance /= 1000;
			time /= 3600;

			if (distance / time <= maxSpeed) {
				std::cout << "OK" << std::endl;
			}else {
				if (distance / time >= maxSpeed * 1.20)
					std::cout << "PUNTOS" << std::endl;
				else
					std::cout << "MULTA" << std::endl;
			}
		}
		std::cin >> distance;
		std::cin >> maxSpeed;
		std::cin >> time;
	}

	return 0;
}