#pragma once
#include <iostream>

class Student
{
public:
	Student(); // constructor
	~Student(); // destructor

private:
	char* name; // name
	int age; // age 

public:
	// PROTOTYPES "SET" FUNCTIONS
	void setName(char* name);

	void setAge(int age);

	// PROTOTYPES "GET" FUNCTIONS
	char* getName();

	int getAge();
};

