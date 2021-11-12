#include "Program.h"

Program::Program(std::string day, std::string time, std::string title) :
	day(day), time(time), title(title) {
	std::cout << "Program(day, time, title)\n";
}

Program::~Program()
{
	std::cout << "~Program()\n";
}

std::string Program::get_data()
{
	return "Program\n" +
		day + "\n" +
		time + "\n" +
		title + "\n";
}

std::string Program::get_print_data()
{
	return "Программа: \n\tдень: " + day +
		"\n\tвремя: " + time +
		"\n\tнаименование: " + title + "\n";
}
