#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "SMS_Main.h"
#include "Print_Menu_and_Title.h"
#include "ScienceStream.h"
#include "CommerceStream.h"
#include "ArtsStream.h"
#include <algorithm>
#include <list>
#include"StudentClass.h"
// using namespace std;

 vector<Student *> m_vect;

void Student_Management_System::deploy()
{
    Parent_Print_Menu_and_Title *bptr;
    Child_Print_Menu_and_Title d;
    bptr = &d;

    // virtual function, binded at runtime (Runtime polymorphism)
    bptr->Title();

    // Non-virtual function, binded at compile time
    bptr->Menu();
}

void Student_Management_System::enterInfo()
{
    int Marks1, Marks2, Marks3, Marks4;
    Student Object;
    int SelectedID = Object.id();
    string ChoosedName = Object.name();
    int SelectedStream = Object.selectstream();
    switch (SelectedStream)
    {
    case 1:
    {
        ScienceStream ScienceStreamObject;
        Student *ptrs = ScienceStreamObject.clone();
        ptrs->m_id = SelectedID;
        ptrs->m_name = ChoosedName;
        ptrs->m_choosestream = SelectedStream;
        ptrs->PrintMenu_For_Taking_Marks();
        ptrs->getMarks(Marks1, Marks2, Marks3, Marks4);
        m_vect.push_back(ptrs);
    }
    break;
    case 2:
    {
        CommerceStream CommerceStreamObject;
        Student *ptrc = CommerceStreamObject.clone();
        ptrc->m_id = SelectedID;
        ptrc->m_name = ChoosedName;
        ptrc->m_choosestream = SelectedStream;
        ptrc->PrintMenu_For_Taking_Marks();
        ptrc->getMarks(Marks1, Marks2, Marks3, Marks4);
        m_vect.push_back(ptrc);
    }
    break;
    case 3:
    {
        ArtsStream ArtsStreamObject;
        Student *ptra = ArtsStreamObject.clone();
        ptra->m_id = SelectedID;
        ptra->m_name = ChoosedName;
        ptra->m_choosestream = SelectedStream;
        ptra->PrintMenu_For_Taking_Marks();
        ptra->getMarks(Marks1, Marks2, Marks3, Marks4);
        m_vect.push_back(ptra);
    }
    break;
    default:
    {
        cout << "\t\t\t\t\t\tKindly enter Right choice " << SelectedStream << endl;
    }
    break;
    }
    cout << "\t\t\t\t\t\tDo you want to continue? (Y/N): ";
    char choose;
    cin >> choose;
    if (choose == 'Y' || choose == 'y')
    {
        enterInfo();
    }
}
void Student_Management_System::Common_Display_Function(int i)
{
    {
        int getMarks1, getMarks2, getMarks3, getMarks4;
        if (m_vect[i]->getStreamData() == 1)
        {
            m_vect[i]->getMarks(getMarks1, getMarks2, getMarks3, getMarks4);
            cout << "\t\t\t\t\t\tMarks of Biology=" << getMarks1 << endl;
            cout << "\t\t\t\t\t\tMarks of Physics=" << getMarks2 << endl;
            cout << "\t\t\t\t\t\tMarks of Chemistry=" << getMarks3 << endl;
            cout << "\t\t\t\t\t\tMarks of Maths=" << getMarks4 << endl;
        }
        else if (m_vect[i]->getStreamData() == 2)
        {
            m_vect[i]->getMarks(getMarks1, getMarks2, getMarks3, getMarks4);
            cout << "\t\t\t\t\t\tMarks of Account=" << getMarks1 << endl;
            cout << "\t\t\t\t\t\tMarks of BusinessStudies=" << getMarks2 << endl;
            cout << "\t\t\t\t\t\tMarks of Economics=" << getMarks3 << endl;
            cout << "\t\t\t\t\t\tMarks of Maths=" << getMarks4 << endl;
        }
        else if (m_vect[i]->getStreamData() == 3)
        {
            m_vect[i]->getMarks(getMarks1, getMarks2, getMarks3, getMarks4);
            cout << "\t\t\t\t\t\tMarks of History=" << getMarks1 << endl;
            cout << "\t\t\t\t\t\tMarks of Geography=" << getMarks2 << endl;
            cout << "\t\t\t\t\t\tMarks of Psychology=" << getMarks3 << endl;
            cout << "\t\t\t\t\t\tMarks of Sociology=" << getMarks4 << endl;
        }
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    }
}
/* Function to display informations of all student */
void Student_Management_System::displayInfo()
{
    bool displayed = false;
    {
        for (auto i = 0; i != m_vect.size(); i++)
        {
            cout << "\t\t\t\t\t\tStudent ID number:  " << m_vect[i]->getId() << endl;
            cout << "\t\t\t\t\t\tFull name:    " << m_vect[i]->getName() << endl;
            Student_Management_System SmsObject;
            SmsObject.Common_Display_Function(i);
            displayed == true;
        }
        if (displayed)
        { // if these informations is displayed
            cout << endl
                 << endl
                 << endl;
            // print notification
            cout << "\t\t\t\t\t\tDisplayed all informations of student!" << endl;
        }
        else
        {
            cout << endl
                 << endl
                 << endl;
            cout << "\t\t\t\t\t\tNo information to display!" << endl;
        }
    }
}
/* Function to delete information of a student */
void Student_Management_System::deleteInfo()
{
    int elem;
    cout << endl
         << endl
         << endl
         << endl
         << endl
         << endl;
    Student sms;
    elem = sms.id();
    int i;
    for (i = 0; i != m_vect.size(); ++i)
    {
        if (elem == m_vect[i]->getId())
        {
            cout << " \t\t\t\t\t\telement found : " << elem << " position : " << i << endl;
            break;
        }
        else
        {
            cout << "\t\t\t\t\t\telement Not Found " << endl;
            return;
        }
    }
    m_vect.erase(m_vect.begin() + (i));
    cout << "\t\t\t\t\t\tStudent " << elem << " number is deleted!" << endl;
}
void Student_Management_System::searchInfo()
{
    int elem;
    bool Found = false;
    int getMarks1, getMarks2, getMarks3, getMarks4;
    Student sms;
    elem = sms.id();
    int i;
    for (i = 0; i != m_vect.size(); i++)
    {
        if (elem == m_vect[i]->getId())
        {
            cout << " Student data found" << endl;
            break;
        }
        else
        {
            cout << "\t\t\t\t\t\telement Not Found " << endl;
            cout << "\t\t\t\t\t\tPlease Enter Data Again" << endl;
            return;
        }
    }
    {
        cout << "\t\t\t\t\t\tFull name:    " << m_vect[i]->getName() << endl;
        Student_Management_System stuObj;
        stuObj.Common_Display_Function(i);
        Found == true;
    }
    if (Found)
    {
        cout << "\t\t\t\t\t\tStudent " << elem << " data is found!" << endl;
    }
}
void Student_Management_System::listInfoByStream()
{
    int getMarks1, getMarks2, getMarks3, getMarks4;
    int enterStreamNumber;
    Student sms;
    enterStreamNumber = sms.selectstream();
    int i;
    for (i = 0; i != m_vect.size(); i++)
    {
        if (enterStreamNumber == m_vect[i]->getStreamData())
        {
            cout << "\t\t\t\t\t\tFull name:    " << m_vect[i]->getName() << endl;
            Student_Management_System stuObj;
            stuObj.Common_Display_Function(i);
        }
    }
}
void Student_Management_System::modifyInfo()
{
    int elem;
    Student Object;
    int Marks1, Marks2, Marks3, Marks4;
    Student sms;
    elem = sms.id();
    int i;
    for (i = 0; i != m_vect.size(); i++)
    {
        if (elem == m_vect[i]->getId())
        {
            cout << " Student data found" << endl;
            break;
        }
        else
        {
            cout << "\t\t\t\t\t\telement Not Found " << endl;
            cout << "\t\t\t\t\t\tPlease Enter Data Again" << endl;
            return;
        }
    }
    {
        cout << "\t\t\t\t\t\tFull name:    " << m_vect[i]->getName() << endl;
        Student_Management_System stuObj;
        stuObj.Common_Display_Function(i);
        cout << "\t\t\t\t\t\t**********************************************";
        int option;
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "\t\t\t\t\t\tChoose item that you want to modify?" << endl
             << endl;
        cout << "\t\t\t\t\t\t**************************************" << endl;
        cout << "\t\t\t\t\t\t*        1. Student Name              *" << endl;
        cout << "\t\t\t\t\t\t*        2. Marks1                    *" << endl;
        cout << "\t\t\t\t\t\t*        3. Marks2                    *" << endl;
        cout << "\t\t\t\t\t\t*        4. Marks3                    *" << endl;
        cout << "\t\t\t\t\t\t*        5. Marks4                    *" << endl;
        cout << "\t\t\t\t\t\t**************************************" << endl;
        cout << "\t\t\t\t\t\tPlease enter your choose: ";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            string name;
            cout << "\t\t\t\t\t\tEnter Student Name You want to change : ";
            cin >> name;
            m_vect[i]->m_name = name;
            cout << m_vect[i]->getName() << endl;
        }
        break;
        case 2:
        {
            int NewMarks1;
            m_vect[i]->getMarks(Marks1, Marks2, Marks3, Marks4);
            cout << "\t\t\t\t\t\tEnter Marks1 : ";
            cin >> NewMarks1;
            m_vect[i]->setMarks(NewMarks1, Marks2, Marks3, Marks4);
        }
        break;
        case 3:
        {
            int NewMarks2;
            m_vect[i]->getMarks(Marks1, Marks2, Marks3, Marks4);
            cout << "\t\t\t\t\t\tEnter Marks2 : ";
            cin >> NewMarks2;
            m_vect[i]->setMarks(Marks1, NewMarks2, Marks3, Marks4);
        }
        break;
        case 4:
        {
            int NewMarks3;
            m_vect[i]->getMarks(Marks1, Marks2, Marks3, Marks4);
            cout << "\t\t\t\t\t\tEnter Marks3 : ";
            cin >> NewMarks3;
            m_vect[i]->setMarks(Marks1, Marks2, NewMarks3, Marks4);
        }
        break;
        case 5:
        {
            int NewMarks4;
            m_vect[i]->getMarks(Marks1, Marks2, Marks3, Marks4);
            cout << "\t\t\t\t\t\tEnter Marks4 : ";
            cin >> NewMarks4;
            m_vect[i]->setMarks(Marks1, Marks2, Marks3, NewMarks4);
        }
        break;
        default:
        {
            cout << "\t\t\t\t\t\tKindly Enter Right Choice" << endl;
        }
        break;
        }
    }
}
int main()
{
    while (1)
    {    
        Student_Management_System sms;
        sms.deploy();
        int option;
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "\t\t\t\t\t\t***************************************************" << endl;
        cout << "\t\t\t\t\t\t*                                                 *" << endl;
        cout << "\t\t\t\t\t\t*         1. Add student informations             *" << endl;
        cout << "\t\t\t\t\t\t*         2. Display student informations         *" << endl;
        cout << "\t\t\t\t\t\t*         3. Delete student informations          *" << endl;
        cout << "\t\t\t\t\t\t*         4. Search student informations          *" << endl;
        cout << "\t\t\t\t\t\t*         5. List of Students by Entering Stream  *" << endl;
        cout << "\t\t\t\t\t\t*         6. Modify Student Marks                 *" << endl;
        cout << "\t\t\t\t\t\t*         7. Exit                                 *" << endl;
        cout << "\t\t\t\t\t\t***************************************************" << endl;
        cout << "\t\t\t\t\t\tPlease enter your choose: ";
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case 1:
        {
            sms.enterInfo();
        }
        break;
        case 2:
        {
            sms.displayInfo();
        }
        break;
        case 3:
        {
            sms.deleteInfo();
        }
        break;
        case 4:
        {
            sms.searchInfo();
        }
        break;
        case 5:
        {
            sms.listInfoByStream();
        }
        break;
        case 6:
        {
            sms.modifyInfo();
        }
        break;
        case 7:
        {
            cout << "\t\t\t\t\t\tEXITED From Student Management System" << endl;
            exit(0);
        }
        default:
        {
            cout << "\t\t\t\t\t\tKindly Enter Right Choice" << endl;
        }
        break;
        }
    }
}
