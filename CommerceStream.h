#include <iostream>
#include "StudentClass.h"

#pragma once
class CommerceStream : public Student
{
private:
    int Account;
    int BusinessStudies;
    int Economics;
    int Maths;

public:
    void setMarks(int p_Account, int p_BusinessStudies, int p_Economics, int p_Maths);
    void getMarks(int &getAccountMarks, int &getBussinessStudiesMarks, int &getEconomicsMarks, int &getMathsMarks);
    void PrintMenu_For_Taking_Marks();
    Student *clone() override { return new CommerceStream(); }
};