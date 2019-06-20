<<<<<<< HEAD:Simulator/Class.h
#include "Settings.h"
#include "Student.h"

#ifndef __CLASS_H__
#define __CLASS_H__

class Class {
private:
	Grade Level;
	int Class_Grade;
	int Class_Number;
	Student* List[MAX_STUDENT_NUMBER];
	int Total_Students;
public:
	void init(Grade grade, int _grade, int number);
	bool Add_Student(Student & newer);
	bool Remove_Student(int index);
	bool Remove_Student(std::string name);
	void List_All_Students(void);
	void List_Class_Properties(void);
	friend class School;
};

#endif

=======
#include "Settings.h"
#include "Student.h"

#ifndef __CLASS_H__
#define __CLASS_H__

class Class {
private:
	Grade Level;
	int Class_Grade;
	int Class_Number;
	Student* List[MAX_STUDENT_NUMBER];
	int Total_Students;
public:
	void init(Grade grade, int _grade, int number);
	bool Add_Student(Student & newer);
	bool Remove_Student(int index);
	bool Remove_Student(std::string name);
	void List_All_Students(void);
	void List_Class_Properties(void);
	friend class School;
};

#endif

>>>>>>> 462f118689e7d23d15ac0e8b71757c3a0a093fc9:Emulator/Class.h
