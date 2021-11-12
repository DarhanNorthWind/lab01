#pragma once
#include <string>
#include "Conference.h"
class Program :
    public Conference
{
private:
    std::string day, time, title;

public:
    Program(std::string day, std::string time, std::string title);
    ~Program();
    std::string get_data() override;
    std::string get_print_data() override;
};

