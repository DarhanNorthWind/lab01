#include "Speaker.h"

Speaker::Speaker(std::string name, std::string organization, std::string report, std::string annotation) : 
	name(name), organization(organization), report(report), annotation(annotation) {
	std::cout << "Speaker(name, organization, report, annotation)\n";
}

Speaker::~Speaker()
{
	std::cout << "~Speaker()\n";
}

std::string Speaker::get_data()
{
	return "Speaker\n" +
		name + "\n" +
		organization + "\n" +
		report + "\n" +
		annotation + "\n";
}

std::string Speaker::get_print_data()
{
	return "Выступающий: \n\tФИО: " + name +
		"\n\tорганизация: " + organization +
		"\n\tдоклад: " + report +
		"\n\tаннотация: " + annotation + "\n";
}
