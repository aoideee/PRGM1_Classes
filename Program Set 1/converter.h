#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

using namespace std;


class Converter
{
public:
    Converter();

    string generateUsername(string, string);
    string getTitle(char, char);
    string convertGPAtoGrade(float);
};

#endif // CONVERTER_H
