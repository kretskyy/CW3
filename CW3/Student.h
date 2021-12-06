#pragma once
#include"Man.h"

class Student : public Man
{
private:
	string univercity;
public:
	Student(string name, int age, int salary, string univercity) : Man(name, age, salary)
	{
		univercity = univercity;
	}

	void PrintInformation() {
		cout << "Info about student Name: " << name << " Age: " << age << " Group: " << univercity << " Salare: " << salary << endl;
	}
};