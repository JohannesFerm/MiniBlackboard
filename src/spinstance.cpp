//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "spinstance.h"

void spinstance::print_info()
{
	std::cout << "The start year is " << start_year << std::endl;
	std::cout << "The end year is " << end_year << std::endl;
}

void spinstance::enroll_student(student* s)
{
	students.push_back(s);
}

void spinstance::print_students()
{
	std::cout << "Students: " << std::endl;
	for (auto v : students)
	{
		v->print_info();
	}
}