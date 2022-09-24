#include <iostream>
using namespace std;


class Parent_Print_Menu_and_Title
{
public:
    virtual void Title ()
    {
            cout << endl << endl << endl << endl << endl << endl;
			cout << "\t\t\t\t\t\t********************************************" << endl;
			cout << "\t\t\t\t\t\t*                                          *" << endl;
			cout << "\t\t\t\t\t\t*        STUDENTS MANAGEMENT SYSTEM        *" << endl;
			cout << "\t\t\t\t\t\t*                                          *" << endl;
			cout << "\t\t\t\t\t\t********************************************" << endl;
    }
    void Menu ()
    {
            cout << "\t\t\t\t\t\t************PLEASE CHECK THE MENU***********" << endl;
    }

};
   
class Child_Print_Menu_and_Title:public Parent_Print_Menu_and_Title
{
public: 
 void Title ()//Title() is already virtual function in derived class, we could also declared as virtual void print () explicitly
   {
       cout << "\t\t\t\t\t\t************STUDENT MANAGEMENT SYSTEM***********" << endl;
   } 
};