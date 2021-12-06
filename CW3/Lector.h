#pragma once
#include "Man.h"
class Lector : public Man
{
private:
	string degree;
public:
	Lector(string name, int age, int salary, string degree) : Man(name, age, salary)
	{
		degree = degree;
	}

	void PrintInformation() {
		cout << "Info about lector Name: " << name << " Age: " << age << " Degree: " << degree << " Salary: " << salary << endl;
	}
};
