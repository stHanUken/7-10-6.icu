#include <string>
#include "Settings.h"

#ifndef __SCHOOL_H__
#define __SCHOOL_H__

class School {
private:
	std::string School_Name;
	Grade Level;
	class Class* List[12][MAX_CLASS_NUMBER];
	int Total_Classes;
public:
	void init(std::string name, Grade school_level);
	void Add_Class(Class & New_Class);
	void Remove_Class(int class_grade, int class_number);
	void List_Properties(void);
};

#endif

