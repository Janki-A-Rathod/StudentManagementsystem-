#include <iostream>
#include "StudentClass.h"
#include "ScienceStream.h"
#include <algorithm>
using namespace std;
void ScienceStream::setMarks(int p_Biology, int p_Physics, int p_Chemistry, int p_Maths)
{
    Biology = p_Biology;
    Physics = p_Physics;
    Chemistry = p_Chemistry;
    Maths = p_Maths;
}
void ScienceStream::getMarks(int &getBiologyMarks, int &getPhysicsMarks, int &getChemistryMarks, int &getMathsMarks)
{
    getBiologyMarks = Biology;
    getPhysicsMarks = Physics;
    getChemistryMarks = Chemistry;
    getMathsMarks = Maths;
}
void ScienceStream ::PrintMenu_For_Taking_Marks()
{
    int ScienceMarks1, ScienceMarks2, ScienceMarks3, ScienceMarks4;
    cout << "\t\t\t\t\t\tEnter Marks of Biology:     ";
    cin >> ScienceMarks1;
    cout << "\t\t\t\t\t\tEnter Marks of Physics:     ";
    cin >> ScienceMarks2;
    cout << "\t\t\t\t\t\tEnter Marks of Chemistry:     ";
    cin >> ScienceMarks3;
    cout << "\t\t\t\t\t\tEnter Marks of Maths:     ";
    cin >> ScienceMarks4;
    if (cin.fail())
    {
        cout << "\t\t\t\t\t\tInvalid Entry\n"
             << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PrintMenu_For_Taking_Marks();
    }
    else
    {
        setMarks(ScienceMarks1, ScienceMarks2, ScienceMarks3, ScienceMarks4);
    }
}