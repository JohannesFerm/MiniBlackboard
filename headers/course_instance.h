//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <vector>
#include "course.h"
class student;
class teacher;
class course_instance:public course 
{
private: 
	int period;
	int year;

public:
	course_instance() : period(), year()
	{
	}
	course_instance(std::string code, int points, int add_period, int add_year) : period(add_period), year(add_year), course(code, points)
	{
	}
	std::vector<student*> students; 
	std::vector<teacher*> teachers;
	void enroll_student(student* s);
	void enroll_teacher(teacher* t);
	void print_people();
}; 