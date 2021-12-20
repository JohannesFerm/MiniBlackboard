//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream> 
#include "student.h"
#include "person.h"
#include <string>
#include <vector>
#include "course.h"
#include "course_instance.h"

void student::print_info() //funktion för att printa info, med den abstracta klassen
{
	std::cout << "Name: " << person::name << " ID: " << id << std::endl;
}

std::string student::return_info() //funktion för att printa info mha interfacen
{
	std::string restr1 = "Namn: " + name;
	std::string restr2 = " ID: " + id;
	return restr1 + restr2;
}

std::vector<course> student::whatcourses()
{
	std::vector<course> wscourses;
	for (auto x : s_courses)
	{
		wscourses.push_back(*x);
	}
	return wscourses;
}