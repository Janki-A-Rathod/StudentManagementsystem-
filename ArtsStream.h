#include <iostream>
#include "StudentClass.h"
#include <algorithm>
#pragma once
class ArtsStream : public Student
{
private:
    int History;
    int Geography;
    int Psychology;
    int Sociology;

public:
    void setMarks(int p_History, int p_Geography, int p_Psychology, int p_Sociology);
    void getMarks(int &getHistoryMarks, int &getGeographyMarks, int &getPsychologyMarks, int &getSociologyMarks);
    void PrintMenu_For_Taking_Marks();
    Student *clone() override { return new ArtsStream(); }
};