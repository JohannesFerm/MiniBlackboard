//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "admin.h"
#include "student.h"
#include "blackboard.h"
#include "study_program.h"
#include "teacher.h"
#include <vector>

void admin::add_student(student* add, blackboard *bblackboard)
{
	bblackboard->students.push_back(add);
}

void admin::add_teacher(teacher* add, blackboard* b)
{
	b->teachers.push_back(add);
}

void admin::add_course(course k, blackboard* b)  //ej pekare->compistation. 
{
	b->courses.push_back(k); 
}

void admin::add_sp(study_program sp, blackboard* b)
{
	b->sps.push_back(sp);
}

void admin::print_office_number()
{
	std::cout << "The Adminstrator has the office number: " << office_number << std::endl;
}

void admin::print_info()
{
	std::cout << "Name: " << name << "Office number: " << office_number << std::endl;
}
std::string admin::return_info()
{
	std::string restr1 = "Name: " + name;
	std::string restr2 = "\nOffice number: " + office_number;
	return restr1 + restr2;
}