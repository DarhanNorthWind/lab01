#include "Administration.h"

Administration::Administration(std::string name, std::string position, std::string responsibility) :
	name(name), position(position), responsibility(responsibility) {
	std::cout << "Administration(name, position, responsibility)\n";
}

Administration::~Administration()
{
	std::cout << "~Administration()\n";
}

std::string Administration::get_data()
{
	return "Administration\n" +
		name + "\n" +
		position + "\n" +
		responsibility + "\n";
}

std::string Administration::get_print_data()
{
	return "Администрация: \n\tФИО: " + name +
		"\n\tдолжность: " + position +
		"\n\tответственность: " + responsibility + "\n";
}
