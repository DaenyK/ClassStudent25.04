#include "student.h"


void main()
{
	student * s;
	int  n;

	ifstream  inFile("in.txt");


	/*cout << "enter number of students: ";
	cin >> n;*/

	inFile >> n;

	s = new student[n];

	for (int i = 0; i < n; i++)
	{
		//cout << "enter information\n";
		inFile>> s[i];
	}

	cout << "\n-----------------------------------\n";

	printStudents(s, n);


	cout << ("woman" != s[0]) << endl;

	cout << (s[0] < s[1]) << endl;

	system("pause");
}