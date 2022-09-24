#include <iostream>
#include <string>
#include "StudentClass.h"
using namespace std;
class Student_Management_System
{
private:  
    void Common_Display_Function(int);
public:
    void deploy();
    void displayInfo();
    void enterInfo();
    void listInfoByStream();
    void searchInfo();
    void modifyInfo();
    void deleteInfo();
};
