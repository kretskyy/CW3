#pragma once
#include "Man.h"
class Assistant_of_lecturer : public Man
{
private:
	string faculty;
public:
	Assistant_of_lecturer(string name, int age, int income, string thesis) : Man(name, age, income)
	{
		faculty = faculty;
	}

	void PrintInformation() {
		cout << "Info about assistant Name: " << name << " Age: " << age << " Faculty: " << faculty << " Salary: " << salary << endl;
	}
};