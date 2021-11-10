#pragma once
#include <string>
#include "Conference.h"
class Speaker :
    public Conference
{
private:
    std::string name, organization, report, annotation;

public:
    std::string get_data() override;
};

