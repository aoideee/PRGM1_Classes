#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


class Student
{
private:
    string firstName;
    string lastName;
    string dob;
    float gpa;
    char gender;
    char status;
    string id;

public:
    Student();
    Student(string, string);

    void setfirstName(string);
    void setlastName(string);
    void setdob(string);
    void setgpa(float);
    void setgender(char);
    void setstatus(char);
    void setid(string);

    string getfirstName();
    string getlastName();
    string getdob();
    float getgpa();
    char getgender();
    char getstatus();
    string getid();

};

#endif // STUDENT_H
