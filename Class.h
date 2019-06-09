// THIS FILE IS TO BE DELETED


#include "Settings.h"
#include "Student.h"

#ifndef __CLASS_H__
#define __CLASS_H__

#define MAX_STUDENT_NUMBER 100

class Class {
private:
	Grade Level;
	int Class_Grade;
	int Class_Number;
	Student* List[MAX_STUDENT_NUMBER];
public:
	int Total_Students;
	void init(Grade grade, int _grade, int number);
	void Add_Student(Student & newer);
	void Remove_Student(int index);
	void Remove_Student(std::string name);
	void List_All_Students(void);
	void List_Class_Properties(void);
};

#endif
