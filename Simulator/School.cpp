#include <iostream>
#include <string>
#include "School.h"
#include "Class.h"
#include "Settings.h"
#include "Debug.h"

void School::init(std::string name, Grade school_level)
{
	School_Name = name;
	Level = school_level;
	for ( int i = 0; i < 12; i ++ )
		for ( int j = 0; j < MAX_CLASS_NUMBER; j ++ )
			List[i][j] = NULL;
	Total_Classes = 0;
	if ( Debug == true)
		std::cout << "Event: Successfully created a school." << std::endl;
}

void School::Add_Class(Class & New_Class)
{
	List[New_Class.Class_Grade][New_Class.Class_Number] = &New_Class;
	Total_Classes ++;
	if ( Debug == true )
		std::cout << "Event: Successfully added a class into the school." << std::endl;
}

void School::Remove_Class(int class_grade, int class_number)
{
	if ( List[class_grade][class_number] != NULL ) {
		List[class_grade][class_number] = NULL;
		if ( Debug == true )
			std::cout << "Event: Successfully removed the designated class." << std::endl;
	} else {
		if ( Debug == true )
			std::cout << "WARNING: NO SUCH A CLASS!" << std::endl;
	}
}

void School::List_Properties(void)
{
	std::cout << std::endl;
	std::cout << "School Name\t\t\t\t" << School_Name << std::endl;
	std::cout << "School Property\t\t\t\t";
	switch ( Level ) {
		case PRIMARY:
			std::cout << "Primary School" << std::endl;
			break;
		case JUNIOR:
			std::cout << "Junior High" << std::endl;
			break;
		case SENIOR:
			std::cout << "Senior High" << std::endl;
			break;
	}
	std::cout << "Number of Classes\t\t\t" << Total_Classes << std::endl;
	std::cout << std::endl;
}
