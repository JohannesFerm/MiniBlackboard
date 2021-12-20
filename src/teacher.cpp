//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "teacher.h"
#include <vector>
#include "course.h"
#include "course_instance.h"

void teacher::print_info()
{
	std::cout << "Name: " << person::name << " Office number: " << office_number;
}
std::string teacher::return_info()
{
	std::string restr1 = "Name: " + name;
	std::string restr2 = "\nOffice number: " + office_number;
	return restr1 + restr2;

}
std::vector<course> teacher::whatcourses()
{
	std::vector<course> wtcourses;
	for (auto x : t_courses) 
	{
		wtcourses.push_back(*x);
	}
	return wtcourses;
}