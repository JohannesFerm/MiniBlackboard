//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include "assessment.h"

class exam:public assessment
{
private:
	int antal_timmar;

public:
	void add_time(int a_timmar = 0); //utan konstruktor för att testa
};



