
//Johannes Ferm & Ahmed Waleed Badday Badday
//att göra med info
//skapa en interface klass, som heter info, som ska ha en funktion som returnerar en sträng
//implementera denna interfaceklass-funktion i admin, teacher och student
//lägg till en funktion i blackboard som tar interface som parameter och printar
//en given person
//lägg till en funktion i blackboard som tar en course_instance som parameter och printar teacher
//och student, mha interfacen
#pragma once
#include <string>
class info //interface klass
{
public:
	virtual std::string return_info() = 0; //funktionen som ska implementeras på annan plats, ?i subklasserna?
};