#include <iostream>
#include "Class.h"
#include "Settings.h"
#include "Debug.h"

void Class::init(Grade grade, int _grade, int number)
{
	Level = grade;
	Class_Grade = _grade;
	Class_Number = number;
	Total_Students = 0;
	for ( int i = 0; i < MAX_STUDENT_NUMBER; i ++ )
		List[i] = NULL;
	if ( Debug == true )
		std::cout << "Event: Successfully created a class." << std::endl;
}

bool Class::Add_Student(Student & newer)
{
	bool isfull = true;
	if ( Total_Students == MAX_STUDENT_NUMBER ) {
		if ( Debug == true )
			std::cout << "WARNING: THE CLASS HAS ALREADY BEEN FULL!" << std::endl;
	} else {
		List[++ Total_Students] = &newer;
		newer.Belonged_Class = this;
		isfull = false;
		if (Debug == true)
			std::cout << "Event: Successfully added a student into the class." << std::endl;
	}
	return isfull;
}

bool Class::Remove_Student(int index)
{
	bool isexist = true;
	if ( List[index] == NULL ) {
		if ( Debug == true )
			std::cout << "WARNING: NO SUCH NUMBER!" << std::endl;
		isexist = false;
	} else {
		List[index] -> Belonged_Class = NULL;
		List[index] = NULL;
		Total_Students --;
		for ( int i = index; i < Total_Students; i ++ ) {
			List[i] = List[i+1];
			List[i+1] = NULL;
		}
		std::cout << "Event: Successfully removed No." << index << " student." << std::endl;
	}
	return isexist;
}

bool Class::Remove_Student(std::string name)
{
	bool isexist = false;
	int i;
	for ( i = 1; i <= Total_Students; i ++ )
		if ( List[i] -> Name == name ) {
			isexist = Remove_Student(i);
			break;
		}
	if ( i > Total_Students )
		if ( Debug == true )
			std::cout << "WARNING: NO SUCH STUDENT!" << std::endl;
	return isexist;
}

void Class::List_All_Students(void)
{
	for ( int i = 1; i <= Total_Students; i ++ )
		List[i] -> List();
}

void Class::List_Class_Properties(void)
{
	std::cout << std::endl;
	std::cout << "Class Name\t\t\t\tClass " << Class_Number << " Grade " << Class_Grade << std::endl;
	std::cout << "Number of Students\t\t\t" << Total_Students << std::endl;
	std::cout << std::endl;
}

