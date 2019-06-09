// THIS FILE IS TO BE DELETED


#include "Settings.h"

#ifndef __STUDENT_H__
#define __STUDENT_H__

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
	void init(std::string name, enum Gender gender, int y, int m, int d, unsigned int age, enum Grade level, double rate);
	void Study(double hours);
	void Relax(double hours);
	Mood Check_Mood(void);
	void Mood_Change(void);
	void Mood_Up(void);
	void Mood_Down(void);
	void Update_Mood_Description(void);
	void Complain(std::string str, int times = 1);
	void List(void);
	std::string Get_Name(void);
	friend class Class;
};

#endif

