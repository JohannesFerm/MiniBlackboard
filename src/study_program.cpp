//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "study_program.h"
#include "course.h"
#include "course_instance.h"

void::study_program::add_course(course& course_to_program)
{
	courses.push_back(&course_to_program);
}
void study_program::print_info()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Code: " << program_code << std::endl;
	std::cout << "Points: " << points << std::endl;
}

std::vector<course> study_program::whatcourses()
{
	std::vector<course> wspc;
	for (auto x : courses) //kollar kurserna i programmet
	{
		wspc.push_back(*x); //lägger till det i vektorn
	}
	return wspc; // retunerar vektorn
}