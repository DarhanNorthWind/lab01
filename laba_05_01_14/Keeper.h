#pragma once
#include <fstream>
#include <string>
#include "Conference.h"
#include "List.h"
class Keeper
{
private:
	List<Conference*> conferences;

public:
	void deleteFigure(size_t position);
	void addFigure(Conference* elem);
	int saveToFile(std::string file);
	int loadFromFile(std::string file);
	void printAll();
};