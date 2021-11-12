#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "List.h"
#include "Conference.h"
#include "Speaker.h"
#include "Program.h"
#include "Administration.h"
class Keeper
{
private:
	List<Conference*> conferences;

public:
	Keeper();
	~Keeper();
	void deleteConference(size_t position);
	void addConference(Conference* elem);
	int saveToFile(std::string file);
	int loadFromFile(std::string file);
	void printAll();
	size_t size();
};