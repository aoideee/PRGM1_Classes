#include <iostream>
#include <cstring>

#include "student.h"
#include "converter.h"
using namespace std;


void printStudent(Student & stu);


int main()
{
    Student s1("John", "Doe");
    printStudent(s1);


    s1.setfirstName("Tysha");
    s1.setlastName("Daniels");
    s1.setid("2020150000");
    s1.setdob("11/11/2006");
    s1.setgpa(4.0);
    s1.setgender('F');
    s1.setstatus('S');
    printStudent(s1);

    Converter c;

    cout<<"Generated Username from "<<s1.getfirstName()<<" "<<s1.getlastName()<<" is: "<<c.generateUsername(s1.getfirstName(),s1.getlastName())<<endl;
    cout<<"Title of person is: '"<<c.getTitle(s1.getgender(),s1.getstatus())<<"' based on gender of: '"<<s1.getgender()<<"' and status of '"<<s1.getstatus()<<"'"<<endl;
    cout<<"Letter grade for a GPA of: "<<s1.getgpa()<<" is: '"<<c.convertGPAtoGrade(s1.getgpa())<<"'"<<endl;

    return 0;
}

void printStudent(Student & stu)
{
    cout<<"*******************************************"<<endl;
    cout<<"Student ID: "<<stu.getid()<<endl;
    cout<<"Student first name: "<<stu.getfirstName()<<endl;
    cout<<"Student last name: "<<stu.getlastName()<<endl;
    cout<<"Student DOB: "<<stu.getdob()<<endl;
    cout<<"Student gender: "<<stu.getgender()<<endl;
    cout<<"Student status: "<<stu.getstatus()<<endl;
    cout<<"Student GPA: "<<stu.getgpa()<<endl;

    cout<<"*******************************************"<<endl;
}
