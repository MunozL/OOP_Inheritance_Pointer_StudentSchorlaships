// OOP_Inheritance_StudentSchorlaships.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    const double FULLTIME = 12; //const for full time students taking 12 credits

    //create intance of Student class  to create a student
    //create intance of ScholatshipStudent child class  to create a scholar student
    //create a ptr to Student class 
    Student aRegularStudent;
    ScholarshipStudent aScholar;
    Student* stdPtr; //declare pointer of type Student
    stdPtr = &aScholar; //initialize it to aScholar addres to access a scholar function


    //set id and credits for both students 
    aRegularStudent.setIdNum(444);
    aRegularStudent.setCredits(FULLTIME);


    aScholar.setIdNum(555);
    aScholar.setCredits(FULLTIME);

    
    cout << "ID # " << aRegularStudent.getIdDum() << "\t Tuition: " << aRegularStudent.getTuition()<<" Credits "<< aRegularStudent.getCredits()<<endl;
    cout << "ID # " << aScholar.getIdDum() << "\t Tuition: " << aScholar.getTuition() << " Credits "<< aScholar.getCredits()<<endl;
    cout << "ID # " << stdPtr->getIdDum() << "\t Tuition: " << stdPtr->getTuition() << " Credits "<<aScholar.getCredits() << endl;

    
}


