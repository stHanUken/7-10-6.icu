#include <iostream>
#include <string>

#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#define MAX_STRING_LENGTH 128

#define MAX_STUDENT_NUMBER 100
#define MAX_CLASS_NUMBER 100

const static std::string __VERSION = "0.0.0.0";

enum Gender {
    MALE, FEMALE
};

enum Grade {
    PRIMARY, JUNIOR, SENIOR
};

typedef struct {
	int value;
	std::string description;
} Mood;

typedef struct {
	int year;
	int month;
	int day;
} Date;

#endif

