#include "student.h"
#include <iostream>

Student::Student() {
	name = new char[20];
	age = 0;
}

Student::~Student() {
	delete[]name;
}

// "SET" FUNCTIONS
void Student::setName(char* name) {
	this->name = name;
}

void Student::setAge(int age) {
	this->age = age;
}

// "GET" FUNCTIONS
char* Student::getName() {
	return this->name;
}

int Student::getAge() {
	return this->age;
}
