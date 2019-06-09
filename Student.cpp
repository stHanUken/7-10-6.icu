// THIS FILE IS TO BE DELETED


#include <iostream>
#include "Student.h"

void Student::init(std::string name, enum Gender gender, int y, int m, int d, unsigned int age, enum Grade level, double rate)
{
	Name = name;
	Sex = gender;
	Birthday.year = y;
	Birthday.month = m;
	Birthday.day = d;
	Age = age;
	Level = level;
	Study_Hours = 0;
	Relax_Hours = 0;
	Now_Mood.value = 2;
	R_S_RATE = rate;
	Update_Mood_Description();
}

void Student::Study(double hours)
{
	Study_Hours += hours;
	std::cout << "Study for " << hours << " hours." << std::endl;
	Mood_Change();
}

void Student::Relax(double hours)
{
	Relax_Hours += hours;
	std::cout << "Relax for " << hours << " hours." << std::endl;
	Mood_Change();
}

Mood Student::Check_Mood(void)
{
	return Now_Mood;
}

void Student::Mood_Change(void)
{
	if ( this -> Relax_Hours / this -> Study_Hours < this -> R_S_RATE )
		Mood_Down();
	else
		Mood_Up();
}

void Student::Mood_Up(void)
{
	if ( Check_Mood().description != "EXCITED" )
		Now_Mood.value --;
	Update_Mood_Description();
}

void Student::Mood_Down(void)
{
	if ( Check_Mood().description != "CRAZY" )
		Now_Mood.value ++;
	Update_Mood_Description();
}

void Student::Update_Mood_Description(void)
{
	switch ( Now_Mood.value ) {
		case 0:
			Now_Mood.description = "Excited";
			break;
		case 1:
			Now_Mood.description = "Happy";
			break;
		case 2:
			Now_Mood.description = "Moderate";
			break;
		case 3:
			Now_Mood.description = "Nervous";
			break;
		case 4:
			Now_Mood.description = "Mad";
			break;
		case 5:
			Now_Mood.description = "Crazy";
			break;
	}
}

void Student::Complain(std::string str, int times)
{
	for ( int i = 0; i < times; i ++ )
		std::cout << Name << ": \'" << str << "\'" << std::endl;
}

void Student::List(void)
{
	std::cout << "Name\t\t\t\t\t" << Name << std::endl;
	std::cout << "Gender\t\t\t\t\t";
	switch ( Sex ) {
		case MALE:
			std::cout << "Male" << std::endl;
			break;
		case FEMALE:
			std::cout << "Female" << std::endl;
	}
	std::cout << "Age\t\t\t\t\t" << Age << std::endl;
	std::cout << "Birthday\t\t\t\t" << Birthday.year << "-" << Birthday.month << "-" << Birthday.day << std::endl;
	std::cout << "Grade\t\t\t\t\t";
	switch ( Level ) {
		case PRIMARY:
			std::cout << "Primary" << std::endl;
			break;
		case JUNIOR:
			std::cout << "Junior" << std::endl;
			break;
		case SENIOR:
			std::cout << "Senior" << std::endl;
			break;
	}
	std::cout << "Total Studying Hours\t\t\t" << Study_Hours << std::endl;
	std::cout << "Total Relaxing Hours\t\t\t" << Relax_Hours << std::endl;
	std::cout << "Mood\t\t\t\t\t" << Now_Mood.description << std::endl;
}

std::string Student::Get_Name(void)
{
	return Name;
}

