#include <iostream>
#include <string>
#include <conio.h>
#include "Settings.h"
#include "Student.h"
#include "Class.h"
#include "School.h"

char isLegal(std::string str, int num, ...);

int Echo()
{
	std::string in = "";
	std::cout << "School Managing Simulator -- 7-10-6.icu" << std::endl;
	std::cout << "Version " << __VERSION << std::endl;
	std::cout << "Welcome!" << std::endl << std::endl;
re1:
	std::cout << std::endl;
	std::cout << "A New School? ( Y / N )" << std::endl;
	in = getch();
	char legal = isLegal(in, 4, 'y', 'n', 'Y', 'N');
	if ( legal == '\0' ) {
		std::cout << "This input is not legal!" << std::endl;
		goto re1;
	} else if ( legal == 'y' | legal == 'Y' ) {
		School* newSchool = new School;
		std::string* s1 = new std::string;
		std::string* s2 = new std::string;
		std::string* s3 = new std::string;
		std::cout << "Command successfully occured." << std::endl << std::endl;
re2:
		*s1 = *s2 = *s3 = "";
		char* temp = new char;
		char* t = new char[2];
		t[0] = t[1] = '\0';
		Grade* g = new Grade;
		std::cout << "Input the name of the school.";
		std::cout << "\t\t\t\t(Press Ctrl+Z to cancel the last operation)";
		std::cout << std::endl << "Name: ";
		for ( int i = 0; ; i ++ ) {
			t[0] = getch();
			if ( t[0] == 26 ) {
				delete newSchool;
				delete s1;
				delete s2;
				delete s3;
				delete temp;
				goto re1;
			} else if ( t[0] == '\r' )
				break;
			else
				s1 -> append(t);
			putchar(t[0]);
		};
re3:
		std::cout << std::endl;
		std::cout << "What\'s the level of the school? input \"p\" for primary, \"j\" for junior, \"s\" for senior." << std::endl;
		*s2 = getch();
		legal = isLegal(*s2, 7, 26, 'p', 'j', 's', 'P', 'J', 'S');
		if ( legal == 26 ) {
			goto re2;
		} else if ( legal == '\0' ) {
			std::cout << "This input is not legal!" << std::endl;
			goto re3;
		} else {
			switch ( legal ) {
				case 'p':
					goto caseP;
				case 'j':
					goto caseJ;
				case 's':
					goto caseS;
				case 'P':
caseP:
					*g = PRIMARY;
					break;
				case 'J':
caseJ:
					*g = JUNIOR;
					break;
				case 'S':
caseS:
					*g = SENIOR;
					break;
			}
re4:
			std::cout << "Are you sure to create such a new school? ( Y / N )" << std::endl;
			std::cout << "This operation cannot be cancelled." << std::endl;
			*s3 = getch();
			legal = isLegal(*s3, 4, 'y', 'n', 'Y', 'N');
			if ( legal == '\0' ) {
				std::cout << "This input is not legal!" << std::endl;
				goto re4;
			} else if ( legal == 'n' || legal == 'N' ) {
				goto re2;
			} else {
				newSchool -> init(*s1, *g);
				delete s1;
				delete s2;
				delete s3;
				delete temp;
				delete g;
				newSchool -> List_Properties();
			}
		}
	} else {
		std::cout << "Sorry, but this part is being coded." << std::endl;
	}
	return 0;
}
