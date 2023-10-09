#include "student.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

Student::Student()
{

}

Student::Student(string fn, string ln)
{
    setfirstName(fn);
    setlastName(ln);
    setdob("01/01/1900");
    setgpa(0.0);
    setgender('M');
    setstatus('M');
    setid("1000000001");
}

void Student::setfirstName(string fn)
{
    bool containsDigit = false;

    for (char c:fn)
    {
        if (isdigit(c))
        {
            cout << "Error: Numbers are not allowed in a name." << endl;
            containsDigit = true;
            break;
        }
    }

    if (containsDigit)
        firstName=""; // Set firstName to an empty string if a digit is found
    else
        firstName=fn; // Set firstName to the input string otherwise
}

void Student::setlastName(string ln)
{
    bool containsDigit = false;

    for (char c:ln)
    {
        if (isdigit(c))
        {
            cout << "Error: Numbers are not allowed in a name." << endl;
            containsDigit = true;
            break;
        }
    }

    if (containsDigit)
        lastName="";
    else
        lastName=ln;
}

void Student::setdob(string DOB)
{
    dob=DOB;
}

void Student::setgpa(float GPA)
{
    if(GPA>=0.0 && GPA<=4.0)
        gpa=GPA;
    else
        gpa=0.0;
}

void Student::setgender(char Gender)
{
    if(Gender=='M' || Gender=='F')
        gender=Gender;
    else
        gender='M';
}

void Student::setstatus(char Status)
{
    if(Status=='M' || Status=='S')
        status=Status;
    else
        status='S';
}

void Student::setid(string ID)
{
    id=ID;
}


string Student::getfirstName()
{
    return firstName;
}

string Student::getlastName()
{
    return lastName;
}

string Student::getdob()
{
    return dob;
}

float Student::getgpa()
{
    return gpa;
}

char Student::getgender()
{
    return gender;
}

char Student::getstatus()
{
    return status;
}

string Student::getid()
{
    return id;
}
