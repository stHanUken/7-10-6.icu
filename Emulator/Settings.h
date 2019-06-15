#include <string>

#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#define MAX_STUDENT_NUMBER 100
#define MAX_CLASS_NUMBER 100

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

#endif

