#pragma once
#include <string>
#include "Conference.h"
class Program :
    public Conference
{
private:
    std::string day, time, title;

public:
    std::string get_data() override;
};

