//Johannes Ferm & Ahmed Waleed Badday Badday
#pragma once
#include <string>
class person
{
public:
	std::string name;
	person() :name("")
	{
	}
	person(std::string namn) : name(namn)
	{
	}
	virtual void print_info() = 0; //gör klassen abstrakt, inte interface då vi har medlemmar
};
