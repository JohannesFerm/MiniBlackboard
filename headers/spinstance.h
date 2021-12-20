//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include "study_program.h"
#include <vector>
#include "student.h"
class spinstance:public study_program
{
private:
	int start_year;
	int end_year;
public:
	spinstance() : start_year(0), end_year(0)
	{

	}
	spinstance(std::string string_name, std::string program_code_input, int points_input, int input_start_year, int input_end_year)
		: study_program(string_name, program_code_input, points_input), start_year(input_start_year), end_year(input_end_year)
	{

	}
	void print_info(); 
	std::vector<student*> students; 
	void enroll_student(student* s);
	void print_students();

};
