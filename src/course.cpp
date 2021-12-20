//Johannes Ferm & Ahmed Waleed Badday Badday
#include <iostream>
#include "course.h"


course::course(std::string kod, int poang)
{
	code = kod;
	points = poang;
}

void course::print_info()
{
	std::cout << "Code: " << code << " Points: " << points;
	std::cout << "\n";
}