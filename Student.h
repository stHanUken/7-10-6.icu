#include <string>

#ifndef __STUDENT_H__
#define __STUDENT_H__

enum Gender {
	MALE, FEMALE
};

enum Grade {
	PRIMARY, JUNIOR, SENIOR
};

enum Mood {
	EXCITED, HAPPY, MODERATE, NERVOUS, LOW, SAD, MAD, CRAZY
};

typedef struct {
	int year;
	int month;
	int day;
} Date;

class Student {
private:
	enum Gender Sex;
	Date Birthday;
	unsigned int Age;
	enum Grade Level;
	int Study_Hours;
	enum Mood Now_Mood;
public:
	Student(enum Gender gender, Date day, unsigned int age, enum Grade level);
	void Study(int hours);
	void Complain(string str, int times);
};

#endif
