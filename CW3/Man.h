#pragma once
#include<string>
#include<iostream>
using namespace std;
class Man
{
protected:
	string name;
	short age;
	int salary;

public:
	Man(string name, short age, double salary) : name(name), age(age), salary(salary) {}

	virtual void PrintInformation() = 0;
	
	int GetAge() { return age; }
	int GetSalary() { return salary; }
};