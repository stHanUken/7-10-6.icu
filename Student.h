#include <string>

#ifndef __STUDENT_H__
#define __STUDENT_H__

enum Gender {
	MALE, FEMALE
};

enum Grade {
	PRIMARY, JUNIOR, SENIOR
};

typedef struct {
	int value;
	std::string description;
//	Excited, Happy, Moderate, Nervous, Sad, Mad, Crazy
} Mood;

typedef struct {
	int year;
	int month;
	int day;
} Date;

class Student {
private:
	std::string Name;
	enum Gender Sex;
	Date Birthday;
	unsigned int Age;
	enum Grade Level;
	double Study_Hours;
	double Relax_Hours;
	double R_S_RATE;
	Mood Now_Mood;
public:
	Student(std::string name, enum Gender gender, Date date, unsigned int age, enum Grade level, double rate);
	void Study(double hours);
	void Relax(double hours);
	Mood Check_Mood(void);
	void Mood_Change(void);
	void Mood_Up(void);
	void Mood_Down(void);
	void Update_Mood_Description(void);
	void Complain(std::string str, int times);
	void List(void);
};

#endif
