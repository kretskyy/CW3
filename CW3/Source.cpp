#include"Man.h"
#include"Lector.h"
#include"Student.h"
#include"Assistant_of_lecturer.h"
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void Older(vector<Man*>& men)
{
	vector<Man*>::iterator it = find_if(men.begin(), men.end(), [](Man* p) {return p->GetAge(); });

	cout << "Men who have over 20 years:\n";

	while (it != men.end())
	{
		(*it)->PrintInformation();
		it = find_if(++it, men.end(), [](Man* p) {return p->GetAge() > 20; });
	}
}

int main() {
	vector<Man*> men{
		new Lector("Anatoliy Kretskyi", 47, 23000, "Dr. Sc. (Phys.‐Math.)"),
		new Lector("Julian Misevich", 58, 11300, "Head of Department"),
		new Lector("Adam Atamanyuk", 34, 12000, "Senior Lecturer"),
		new Student("Arsen Gaivoronsky", 19, 1300, "LNU"),
		new Student("Anatoliy Kolosyuk", 18, 1050, "NULP"),
		new Student("Artur Kornelyuk", 20, 0, "NLTU"),
		new Assistant_of_lecturer("Artem Zubach", 25, 2500, "AMI"),
		new Assistant_of_lecturer("Myron Zubach", 22, 3000, "AMI"),
	};

	Older(men);

	sort(men.begin(), men.end(), [](Man* p1, Man* p2) {return p1->GetSalary() > p2->GetSalary(); });

	cout << "\n\nSorted persons by salary from smaller to bigger:\n";
	for (vector<Man*>::iterator i = men.begin(); i != men.end(); ++i) {
		(*i)->PrintInformation();
	}
}