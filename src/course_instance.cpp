//Johannes Ferm & Ahmed Waleed Badday Badday
#include "course_instance.h"
#include "student.h"
#include "teacher.h"
#include <vector>
#include <iostream>

void course_instance::enroll_student(student* s)
{
	students.push_back(s);
	s->s_courses.push_back(this);
}

void course_instance::enroll_teacher(teacher* t)
{
	teachers.push_back(t);
	t->t_courses.push_back(this);
}

void course_instance::print_people()
{
	std::cout << "Students: " << std::endl;
	for (auto x : students)
	{
		x->print_info();
		std::cout << std::endl;
	}
	std::cout << "Teachers" << std::endl;
	for (auto f : teachers)
	{
		f->print_info();
	}
}