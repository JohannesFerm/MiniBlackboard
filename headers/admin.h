//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <vector>
#include "person.h"
#include "info.h"

class blackboard;
class student;
class study_program;
class teacher;
class course;
class admin:private person, public info
{
public:
	admin() : office_number()
	{
	}
	admin(std::string namn, std::string add_office_number) : person(namn), office_number(add_office_number)
	{
	}
	void add_student(student* add, blackboard *bblackboard);
	void add_teacher(teacher* add, blackboard* b);
	void add_course(course k, blackboard* b);
	void add_sp(study_program sp, blackboard* b);
	void print_office_number();
	void print_info();
	std::string return_info();
private:
	std::string office_number;

};

