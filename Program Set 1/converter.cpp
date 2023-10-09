#include "converter.h"
#include <iostream>
#include <string>

using namespace std;

Converter::Converter()
{

}

string Converter::generateUsername(string firstname, string lastname)
{
    return firstname[0] + lastname;
}

string Converter::getTitle(char gender, char status)
{
    string result;

    if(gender=='F' && status=='S')
        result="Ms.";
    else
        if (gender=='F' && status=='M')
        result="Mrs.";
    else
        result="Mr.";

    return result;
}

string Converter::convertGPAtoGrade(float gpa)
{
    if (gpa==4.0)
        return "A";
    else if (gpa>=3.7)
        return "A-";
    else if (gpa>=3.3)
        return "B+";
    else if (gpa>=3.0)
        return "B";
    else if (gpa>=2.7)
        return "B-";
    else if (gpa>=2.3)
        return "C+";
    else if (gpa>=2.0)
        return "C";
    else if (gpa>=1.7)
        return "C-";
    else if (gpa>=1.3)
        return "D+";
    else if (gpa>=1.0)
        return "D";
    else if (gpa>=0.7)
        return "D-";
    else
        return "F";
}
