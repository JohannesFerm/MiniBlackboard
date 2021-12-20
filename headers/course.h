//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include "assessment.h"
#include <vector>
#include <string>
//class teacher;
class course
{
private:
	std::string code;
	int points;
	std::vector<assessment> assessments;
public:
	course() : code(), points(), assessments()
	{
	}
	course(std::string kod, int poang);
	void print_info();
};
