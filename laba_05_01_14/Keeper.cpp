#include "Keeper.h"

Keeper::Keeper()
{
	std::cout << "Keeper()\n";
}

Keeper::~Keeper()
{
	std::cout << "~Keeper()\n";
}

void Keeper::printAll()
{
	for (size_t i = 0; i < conferences.size(); i++)
		std::cout << "Конференция №" << i + 1 << ":\n" << conferences[i]->get_print_data();
}

void Keeper::addConference(Conference* elem)
{
	conferences.push_back(elem);
}

void Keeper::deleteConference(size_t num)
{
	delete conferences.pop(num);
}

int Keeper::saveToFile(string file)
{
	std::ofstream fout(file);
	if (!fout) return 0;
	fout << to_string(conferences.size()) << std::endl;
	for (size_t i = 0; i < conferences.size(); ++i)
		fout << conferences[i]->get_data();

	fout.close();
	return 1;
}

int Keeper::loadFromFile(string file)
{
	std::ifstream fin(file);
	if (!fin) return 0;

	std::string type;
	size_t vehicle_amount;

	fin >> vehicle_amount;
	for (size_t i = 0; i < vehicle_amount; i++)
	{
		fin >> type;
		if (type == "Speaker")
		{
			std::string name, organization, report, annotation;
			getline(fin, name);
			getline(fin, name);
			getline(fin, organization);
			getline(fin, report);
			getline(fin, annotation);
			conferences.push_back(new Speaker(name, organization, report, annotation));
		}
		else if (type == "Administration")
		{
			std::string name, position, responsibility;
			getline(fin, name);
			getline(fin, name);
			getline(fin, position);
			getline(fin, responsibility);
			conferences.push_back(new Administration(name, position, responsibility));
		}
		else if (type == "Program")
		{
			std::string day, time, title;
			getline(fin, day);
			getline(fin, time);
			getline(fin, title);
			conferences.push_back(new Program(day, time, title));
		}
	}
	return 1;
}

size_t Keeper::size()
{
	return conferences.size();
}
