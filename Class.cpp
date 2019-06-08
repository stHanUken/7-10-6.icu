#include <iostream>
#include "Class.h"

void Class::init(Grade grade, int _grade, int number)
{
	Level = grade;
	Class_Grade = _grade;
	Class_Number = number;
	Total_Students = 0;
	for (int i = 0; i < MAX_STUDENT_NUMBER; i ++)
		List[i] = NULL;
}

void Class::Add_Student(Student & newer)
{
	List[++ Total_Students] = &newer;
}

void Class::Remove_Student(int index)
{
	if ( List[index] == NULL ) {
		std::cout << "No such number!" << std::endl;
		return;
	}
	List[index] = NULL;
	Total_Students --;
	for ( int i = index; i < Total_Students; i ++ ) {
		List[i] = List[i+1];
		List[i+1] = NULL;
	}
	std::cout << "Successfully removed No." << index << " student." << std::endl;
}

void Class::Remove_Student(std::string name)
{
	int i;
	for ( i = 1; i <= Total_Students; i ++ )
		if ( List[i] -> Name == name ) {
			Remove_Student(i);
			break;
		}
	if ( i > Total_Students )
		std::cout << "No such student!" << std::endl;
}

void Class::List_All_Students(void)
{
	for (int i = 1; i <= Total_Students; i ++)
		List[i] -> List();
}

void Class::List_Class_Properties(void)
{
	std::cout << "Class Name\t\t\t\tClass" << Class_Number << " Grade " << Class_Grade << std::endl;
	std::cout << "Number of Students\t\t\t" << Total_Students << std::endl;
}

