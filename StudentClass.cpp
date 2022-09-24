#include <iostream>
#include <string>
#include "StudentClass.h"
#include "ScienceStream.h"
#include "CommerceStream.h"
#include "ArtsStream.h"
#include <algorithm>
void Student ::setMarks(int setFirstMarks, int setSecondMarks, int setThirdMarks, int setFourthMarks)
{
  cout << "errror :::: set calling from virtual function" << endl;
}
void Student ::getMarks(int &getFirstMarks, int &getSecondMarks, int &getThirdMarks, int &getFourthMarks)
{
  cout << "errror :::: get calling from virtual function" << endl;
}
void Student :: PrintMenu_For_Taking_Marks ()
{
   cout << "errror :::: get calling from virtual function" << endl;
}
int Student ::id()
{
  int enterid;
  cout << "\t\t\t\t\t\tStudent ID number:       ";
  cin >> enterid;
  while (cin.fail())
  {
    cout << "\t\t\t\t\t\tInvalid Entry\n\t\t\t\t\t\tEnter Numerical data" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    id();
    break;
  }
  return enterid;
}
string Student ::name()
{
  string entername;
  cout << "\t\t\t\t\t\tFull name:     ";
  cin >>entername;
  for (int i = 0; i < entername.length(); i++)
  {
    char c = entername.at(i);
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
      cout << "\t\t\t\t\t\tError! Please Enter valid Name" << endl;
      name();
      break;
    }
  }
  return entername;
}
int Student::selectstream()
{
  int enterstream;
  cout << "\t\t\t\t\t\tChoose Stream:  1.Science 2.Commerce 3.Arts  ";
  cin >> enterstream;
  if (cin.fail())
  {
    cout << "\t\t\t\t\t\tInvalid Entry\n\t\t\t\t\t\tEnter Numerical data" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    selectstream();
  }
  return enterstream;
}