#pragma once
#include <iostream>
#include <string>
class Conference
{
public:
	Conference();
	virtual ~Conference();
	virtual std::string get_data() = 0;
	virtual std::string get_print_data() = 0;
};

