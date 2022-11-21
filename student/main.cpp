#include <iostream>
#include "student.h"

int main()
{
    setlocale(LC_ALL, "rus");
    Student* student = new Student;

    // ENTER NAME
    char* name = new char[20];
    std::cout << "Введите имя: "; std::cin >> name; std::cout << std::endl;
    student->setName(name);

    // ENTER AGE
    int age;
    std::cout << "Введите возраст: "; std::cin >> age; std::cout << std::endl;
    student->setAge(age);

    // OUTPUT
    std::cout << "Имя: " << student->getName(); std::cout << std::endl;
    std::cout << "Возраст: " << student->getAge();

    delete student; // clear memory
}
