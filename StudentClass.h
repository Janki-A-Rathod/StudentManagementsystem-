#include <iostream>
#include <string>
#pragma once
using namespace std;
class Student
{

public:
  int m_id;
  string m_name;
  int m_choosestream;

  Student(const std::string &name = "", int ChooseStream = 0, int id = 0)
      : m_name{name}, m_id{id}, m_choosestream{ChooseStream}
  {
  }
  int getId() const { return m_id; }
  const std::string &getName() const { return m_name; }
  int getStreamData() const { return m_choosestream; }

  virtual void getMarks(int &getFirstMarks, int &getSecondMarks, int &getThirdMarks, int &getFourthMarks);
  virtual void setMarks(int setFirstMarks, int setSecondMarks, int setThirdMarks, int setFourthMarks);
  int id();
  string name();
  int selectstream();
  virtual void PrintMenu_For_Taking_Marks();
  virtual Student *clone() { return new Student(); }
};
