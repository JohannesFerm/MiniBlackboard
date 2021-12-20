//Johannes Ferm & Ahmed Waleed Badday Badday
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include "assessment.h"

class assignment: public assessment
{
private:
	int max_pages;

public:
	void max_sidor(int sidor = 0); //igen utan konstruktor för att testa

};
#endif