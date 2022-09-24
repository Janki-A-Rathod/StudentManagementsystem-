#include <iostream>
#include "StudentClass.h"
#include "ArtsStream.h"
using namespace std;
void ArtsStream::setMarks(int p_History, int p_Geography, int p_Psychology, int p_Sociology)
{
  History = p_History;
  Geography = p_Geography;
  Psychology = p_Psychology;
  Sociology = p_Sociology;
}
void ArtsStream::getMarks(int &getHistoryMarks, int &getGeographyMarks, int &getPsychologyMarks, int &getSociologyMarks)
{
  getHistoryMarks = History;
  getGeographyMarks = Geography;
  getPsychologyMarks = Psychology;
  getSociologyMarks = Sociology;
}
void ArtsStream ::PrintMenu_For_Taking_Marks()
{
  int artsMarks1, artsMarks2, artsMarks3, artsMarks4;
  cout << "\t\t\t\t\t\tEnter Marks of Account:     ";
  cin >> artsMarks1;
  cout << "\t\t\t\t\t\tEnter Marks of BusinessStudies:     ";
  cin >> artsMarks2;
  cout << "\t\t\t\t\t\tEnter Marks of Economics:     ";
  cin >> artsMarks3;
  cout << "\t\t\t\t\t\tEnter Marks of Maths:     ";
  cin >> artsMarks4;
  if (cin.fail())
  {
    cout << "\t\t\t\t\t\tInvalid Entry\n\t\t\t\t\t\tEnter Numerical data" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    PrintMenu_For_Taking_Marks();
  }
  else
  {
    setMarks(artsMarks1, artsMarks2, artsMarks3, artsMarks4);
  }
}