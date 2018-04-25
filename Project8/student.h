#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "librarys.h"

class student
{
	string name;
	string surname;
	int age;
	string gender;
	int group;


public:
	student();
	student(string name, string surname, int age, string gender, int group);
	student(const student &obj);
	virtual ~student() {};
	
	bool operator<(student obj);
	bool operator>(student obj);

	friend void printStudents(student *ss, int size);
	friend void  operator >> (istream & in, student& s); // можно вместо istream & использовать void

	friend bool operator==(string male, student obj);
	friend bool operator!=(string male, student obj);

	friend bool operator>(int male, student obj);
	friend bool operator<(int male, student obj);

	

};

#endif