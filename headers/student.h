//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include "person.h"
#include "info.h"
#include <string>
#include <vector>
#include "WhatCourses.h"

class course_instance;
class student:public person, public info, public WhatCourses
{
private:
	std::string id;
public:
	student() : id()
	{
	}
	student(std::string namn , std::string add_id) : person(namn), id(add_id)
	{
	}
	void print_info();
	std::string return_info();
	std::vector<course_instance*> s_courses;
	std::vector<course> whatcourses();
	
};
