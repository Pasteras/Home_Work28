//Students.
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

const int n = 3;

struct stud
{
	char first_name[25];
	int mat, fiz, it;
	float gpa;
}
students[n];

void Showlist(int rate_math, int rate_phisics, int rate_it);


void main()

{
	float rate_math, rate_phisics, rate_it;
	rate_math = rate_phisics = rate_it = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "Info or Student " << (i + 1) << endl;
		cout << "Enter first name: \n";
		cin >> students[i].first_name;
		cout << "Rate or Math, Phisics, It.\n";
		cin >> students[i].mat >> students[i].fiz >> students[i].it;
		students[i].gpa = (float(students[i].mat + students[i].fiz + students[i].it)) / 3;
		rate_math += students[i].mat;
		rate_phisics += students[i].fiz;
		rate_it += students[i].it;
	}
	Showlist(rate_math, rate_phisics, rate_it);
}

void Showlist(int rate_math, int rate_phisics, int rate_it)
{
	cout << "\n\tResult\n";
	cout.precision(3);
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " " << students[i].first_name << " Math. = " <<
			students[i].mat << " Phisics = " << students[i].fiz << "It. = " <<
			students[i].it << " GPA = " << students[i].gpa << "\n";
		cout << "\n\nGPA group in math = " << rate_math / n;
		cout << "\nGPA group in phisics = " << rate_phisics / n;
		cout << "\nGPA group in It = " << rate_it / n;
		cout << "\n\nExcellent students: \n";
		for (i = 0; i < n; i++)
		{
			if (students[i].mat == 5 && students[i].fiz == 5 && students[i].it == 5) cout << students[i].first_name << "\n";
		}

		cout << "\n\nStudents rate of Physics 5 or 4: \n";
		for (i = 0; i < n; i++)
		{
			if (students[i].fiz == 5 || students[i].fiz == 4) cout << students[i].first_name << "\n";
		}
	}
}

