//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "blackboard.h"
#include "info.h"
#include "course_instance.h"

void blackboard::print_url()
{
	std::cout << "The Url of the blackboard is: " << url << std::endl;
}

void blackboard::print_people()
{
	std::cout << "Students: " << std::endl;
	for (auto x : students)
	{
		x->print_info();
	}
	std::cout << "Teachers: " << std::endl;
	for (auto y : teachers)
	{
		y->print_info();
	}
	std::cout << std::endl;
}

void blackboard::print_courses()
{
	std::cout << "Courses: " << std::endl;
	for (auto &x : courses) //kanske skapar kopior
	{
		x.print_info();
	}
}

void blackboard::print_sps()
{
	std::cout << "Study programs: " << std::endl;
	for (auto &x : sps)
	{
		x.print_info();
	}
}

void blackboard::print_via_interface(info& person)
{
	std::cout << person.return_info() << std::endl;
}
void blackboard::print_people_i(course_instance& course_i) 
{
	for (auto t : course_i.teachers)
	{ // går igenom vektorn och refererar till varje vektorelement
		print_via_interface(*t); // ?????????????? fråga fanhang
	}

	for (auto s : course_i.students)
	{ // går igenom vektorn och refererar till varje vektorelement
		print_via_interface(*s); // ?????????????? fråga fanhang, stjärnan derefererar pekaren så vi kommer åt objektet
	}
}
