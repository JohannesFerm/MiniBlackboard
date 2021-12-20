//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <string>
#include <vector>
#include "course.h"
#include "WhatCourses.h"
class course;
class study_program : public WhatCourses
{
private:

	std::string name;
	std::string program_code;
	int points;
public:
	std::vector<course*> courses;
	study_program() : name(), program_code(), points(), courses()
	{
	}
	study_program(std::string string_name, std::string program_code_input, int points_input)
		: name(string_name), program_code(program_code_input), points(points_input), courses()
	{	
	}
	void add_course(course& course_to_program);
	void print_info();
	std::vector<course> whatcourses(); // en funktion som retunerar en hel vektor med vilka kurser
};
