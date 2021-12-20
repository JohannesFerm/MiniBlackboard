//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <string>
#include <vector>
#include "course.h"
#include "person.h"
#include "study_program.h"
#include "student.h"
#include "teacher.h"
#include "admin.h"


class info;
class course_instance;

class blackboard
{
private:
	std::string url;
public:
	blackboard() : url()
	{
	}
	blackboard(std::string add_url) : url(add_url)
	{
	}
	void print_url();
	void print_people();
	void print_courses();
	void print_sps();
	void print_via_interface(info& person);
	void print_people_i(course_instance& course_i);

	std::vector<student*> students; //listan/vektorn  med pekare försvinner om vi tar bort blackboard, men personerna i listan består, stannar KVAR
	std::vector<teacher*> teachers;
	std::vector<admin*> admins;
	std::vector<study_program> sps; //försvinner helt.
	std::vector<course> courses; //



};

