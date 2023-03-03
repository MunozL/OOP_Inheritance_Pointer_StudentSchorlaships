#include "Student.h"

Student::Student() //constructor
{
}

void Student::setIdNum(int idNum)//setter needs a int arguemtn for idNum
{
    this->idNum = idNum;
}

int Student::getIdDum()//getter needs idNum argument that was passed in the stter 
{
    return idNum;
}

//credit setter with hours arugment. 
//hours are assigend to billableCredits. Multiply each billableCrditcredit(hour) by 100 to figure out tuition
void Student::setCredits(double hours )
{
    billableCredits = hours;
    tuition = billableCredits * 100;
}

double Student::getCredits()//returns numbers of credits
{
    return billableCredits;
}

double Student::getTuition()//returns total tuition amount
{
    return tuition;
}


//Scholarship child class will overide the function 


//need to pass hours again as argument as how we did for Student setter
//Call Student (superclass) inside child setter. anf call function set credits
void ScholarshipStudent::setCredits(int hours)
{
    Student::setCredits(0);//needs a parameter of 0 to set tuition to 0
    actualCredits = hours;
}

//override getter function
double ScholarshipStudent::getCredits()
{
    return actualCredits;
}

