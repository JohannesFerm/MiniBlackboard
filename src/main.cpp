//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "blackboard.h"
#include "person.h"
#include "spinstance.h"
#include "study_program.h"
#include "admin.h"
#include "student.h"
#include "teacher.h"
#include "assessment.h"
#include "assignment.h"
#include "blackboard.h"
#include "course.h"
#include "course_instance.h"
#include "exam.h"
#include <vector>

using namespace std;
//main med lite lätt testning
int main()
{
	//alla variabler/objekt
	student johannes("Johannes", "10");
	student ahmed("Ahmed", "1");
	admin alfonso("Alfonso", "1234");
	blackboard b1("www.blackboard.com");
	teacher carlton("Carlton", "t220");
	course OOP("DT506G", 7);
	course_instance OOP1("DT506G", 7, 1, 2020);
	course_instance VÅGMATERIA("FY501G", 6, 1, 2022);
	study_program data("Datateknik", "DT000", 300);

	spinstance datainst("Datateknik", "DT000", 300, 2020, 2025);

	//string g = johannes.pinfo();
	//string t = alfonso.return_info();
	//cout << t << endl;
	//b1.print_via_interface(johannes);



	//admin lägger in i blackboard, med prints på slutet som test
	alfonso.add_student(&ahmed, &b1);
	alfonso.add_student(&johannes, &b1);
	alfonso.add_teacher(&carlton, &b1);
	alfonso.add_course(OOP, &b1);
	alfonso.add_sp(data, &b1);
	
	//b1.print_people();
	//b1.print_courses();
	//b1.print_sps();

	//cout << endl;

	//lägg in studenter och lärare i kursinstanser, med en print på slutet
	OOP1.enroll_student(&johannes);
	OOP1.enroll_student(&ahmed);
	OOP1.enroll_teacher(&carlton);
	//OOP1.print_people();
	//b1.print_people_i(OOP1);
	//carlton.t_courses[0]->print_info();

	//cout << endl << endl;

	//lägg in studenter i programinstanser, med en print på slutet
	datainst.enroll_student(&ahmed);
	datainst.enroll_student(&johannes);
	//datainst.print_students();

	// LÄGGER TILL KURSER I PROGRAMET.
	data.add_course(OOP);
	data.add_course(VÅGMATERIA);


	vector<course> t = johannes.whatcourses();
	for (auto& x : t)
	{
		x.print_info();
	}

	vector<course> t2 = carlton.whatcourses();
	for (auto& x : t2)
	{
		x.print_info();
	}

	vector<course> t3 = data.whatcourses(); //data har kurser
	for (auto &x : t3)
	{
		x.print_info();
	}
}



