#include <iostream>
#include "StudentClass.h"

#pragma once

class ScienceStream : public Student
{
private:
    int Biology;
    int Physics;
    int Chemistry;
    int Maths;

public:
    void setMarks(int p_Biology, int p_Physics, int p_Chemistry, int p_Maths);
    void getMarks(int &getBiologyMarks, int &getPhysicsMarks, int &getChemistryMarks, int &getMathsMarks);
    void PrintMenu_For_Taking_Marks();
    Student *clone() override { return new ScienceStream(); }
};