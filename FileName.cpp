#include <iostream>

int main(){
	setlocale(LC_ALL, "Russian");
	int w,h;
	std::cout << " Введите ширину доски - > ";
	std::cin >> w;
	std::cout << " Введите высоту доски - > ";
	std::cin >> h;

	for (int i = 0; i < h + 2; i++) { //высота
		for (int j = 0; j < w + 2; j++) {
			if (i == 0 || j == 0 || i == h + 1 || j == w + 1)
				std::cout << "* ";
			else if ((i + j) % 2 == 0)
				std::cout << "# ";
			else
				std::cout << "  ";

		}
		std::cout << std::endl;
	}


	std::cout << "\n";

	return 0;

	}