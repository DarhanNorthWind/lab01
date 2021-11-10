#pragma once
#include <string>
#include "Conference.h"
class Administration :
    public Conference
{
private:
    std::string name, position, responsibility;

public:
    std::string get_data() override;
};

