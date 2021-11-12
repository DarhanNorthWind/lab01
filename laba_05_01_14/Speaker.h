#pragma once
#include <string>
#include "Conference.h"
class Speaker :
    public Conference
{
private:
    std::string name, organization, report, annotation;

public:
    Speaker(std::string name, std::string organization, std::string report, std::string annotation);
    ~Speaker();
    std::string get_data() override;
    std::string get_print_data() override;
};

