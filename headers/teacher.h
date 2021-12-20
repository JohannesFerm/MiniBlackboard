//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <vector>
#include <string>
#include "info.h"
#include "person.h"
#include "WhatCourses.h"

class course_instance;
class teacher:private person, public info, public WhatCourses
{
private:
	std::string office_number;
public:
	teacher() : office_number()
	{
	}
	teacher(std::string namn, std::string add_office_number): person(namn),  office_number(add_office_number)
		
	{ 
	}
	void print_info();
	std::string return_info();
	std::vector<course_instance*> t_courses;
	std::vector<course> whatcourses();


};