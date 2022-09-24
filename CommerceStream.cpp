#include <iostream>
#include "StudentClass.h"
#include "CommerceStream.h"
#include <algorithm>
using namespace std;
void CommerceStream::setMarks(int p_Account, int p_BusinessStudies, int p_Economics, int p_Maths)
{
  Account = p_Account;
  BusinessStudies = p_BusinessStudies;
  Economics = p_Economics;
  Maths = p_Maths;
}
void CommerceStream::getMarks(int &getAccountMarks, int &getBussinessStudiesMarks, int &getEconomicsMarks, int &getMathsMarks)
{
  getAccountMarks = Account;
  getBussinessStudiesMarks = BusinessStudies;
  getEconomicsMarks = Economics;
  getMathsMarks = Maths;
}
void CommerceStream ::PrintMenu_For_Taking_Marks()
{
  int commerceMarks1, commerceMarks2, commerceMarks3, commerceMarks4;
  cout << "\t\t\t\t\t\tEnter Marks of Account:     ";
  cin >> commerceMarks1;
  cout << "\t\t\t\t\t\tEnter Marks of BusinessStudies:     ";
  cin >> commerceMarks2;
  cout << "\t\t\t\t\t\tEnter Marks of Economics:     ";
  cin >> commerceMarks3;
  cout << "\t\t\t\t\t\tEnter Marks of Maths:     ";
  cin >> commerceMarks4;
  if (cin.fail())
  {
    cout << "\t\t\t\t\t\tInvalid Entry" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    PrintMenu_For_Taking_Marks();
  }
  else
  {
    setMarks(commerceMarks1, commerceMarks2, commerceMarks3, commerceMarks4);
  }
}