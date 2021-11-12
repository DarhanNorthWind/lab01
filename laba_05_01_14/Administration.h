#pragma once
#include <string>
#include "Conference.h"
class Administration :
	public Conference
{
private:
	std::string name, position, responsibility;

public:
	Administration(std::string name, std::string position, std::string responsibility);
	~Administration();
	std::string get_data() override;
	std::string get_print_data() override;
};

