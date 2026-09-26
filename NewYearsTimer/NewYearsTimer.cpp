#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "ru");
	std::string b;
	std::cout << "Привествую в программме! Пропиши menu для узнавания месяцев!" << std::endl;


	while (true) {


		std::cin >> b;
		if (b == "menu") {
			std::cout << "=========MENU=========" << std::endl;
			std::cout << "january - январь" << std::endl;
			std::cout << "february - февраль" << std::endl;
			std::cout << "march - март" << std::endl;
			std::cout << "april - апрель" << std::endl;
			std::cout << "may - май" << std::endl;
			std::cout << "june - июнь" << std::endl;
			std::cout << "july - июль" << std::endl;
			std::cout << "august - август" << std::endl;
			std::cout << "september - сентябрь" << std::endl;
			std::cout << "october - октябрь" << std::endl;
			std::cout << "november - ноябрь" << std::endl;
			std::cout << "december - декабрь" << std::endl;
			std::cout << "=========MENU=========" << std::endl;
			std::cout << "build 26092026 26.09.2026" << std::endl;
		}



		if (b == "january") {
			std::cout << "До нового года осталось.... а ой! Уже новый год! Поздравляю вас!" << std::endl;
		}
		else if (b == "february") {
			std::cout << "До нового года осталось 11 месяцев!" << std::endl;
		}
		else if (b == "march") {
			std::cout << "До нового года осталось 10 месяцев!" << std::endl;
		}
		else if (b == "april") {
			std::cout << "До нового года осталось 9 месяцев!" << std::endl;
		}
		else if (b == "may") {
			std::cout << "До нового года осталось 8 месяцев!" << std::endl;
		}
		else if (b == "june") {
			std::cout << "До нового года осталось 7 месяцев!" << std::endl;
		}
		else if (b == "july") {
			std::cout << "До нового года осталось 6 месяцев!" << std::endl;
		}
		else if (b == "august") {
			std::cout << "До нового года осталось 5 месяцев!" << std::endl;
		}
		else if (b == "september") {
			std::cout << "До нового года осталось 4 месяца!" << std::endl;
		}
		else if (b == "october") {
			std::cout << "До нового года осталось 3 месяца!" << std::endl;
		}
		else if (b == "november") {
			std::cout << "До нового года осталось 2 месяца!" << std::endl;
		}
		else if (b == "december") {
			std::cout << "До нового года осталось 1 месяц!" << std::endl;
		}



	}



	return 0;
}