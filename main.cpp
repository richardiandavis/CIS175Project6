// Rich DAvis
// 9/21/22
// CIS175 Project 6

#include <iostream>
#include <limits>

int main() {
	std::string answer = "yes";
	int month;
	int day;
	int year;
	while (answer == "yes" || answer == "Yes" || answer == "YES") {
		std::cout << std::endl << "Find out if your date is Magic! Please enter a month in two digit numerical form." << std::endl;
		for (;;) {
			if (std::cin >> month) {
				break;
			}
			else {
				std::cout << "Please enter a valid integer." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		std::cout << std::endl << "Now enter a day in two digit numerical form." << std::endl;
		for (;;) {
			if (std::cin >> day) {
				break;
			}
			else {
				std::cout << "Please enter a valid integer." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		std::cout << std::endl << "Great! Lastly, enter a year in four digit numerical form." << std::endl;
		for (;;) {
			if (std::cin >> year) {
				break;
			}
			else {
				std::cout << "Please enter a valid integer." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		year = year % 100;
		if (month * day == year) {
			std::cout << "Your date is magical! " << month << " times " << day << " equals " << year << "!!" << std::endl;
		}
		else {
			std::cout << "Your date is not magical. At least not in this way." << std::endl << std::endl;
		}
		std::cout << std::endl << std::endl << "Would you like to try another date?" << std::endl;
		std::cin >> answer;
	}
	return 0;
}