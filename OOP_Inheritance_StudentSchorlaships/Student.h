#pragma once
#include <iostream>
class Student
{
private:
	int idNum; //students id#
	double billableCredits;
	double tuition;
public:
	Student();//constructor
	void setIdNum(int);//id setter
	int getIdDum();//id getter
	void setCredits(double);
	double getCredits();
	double getTuition();
};


//ScholarshipStudent child class with extra fields and methods that can only be accessed but ScholatshipStudent class
//this child class has access to all fields and functions of super class(Parent class) Student.
//Can override functions. 
class ScholarshipStudent : public Student {
private:
	int actualCredits; // This will have the actual credits for a scholar
public:
	void setCredits(int); //setter for ScholarshipStudent child class. It will override Students setter
	double getCredits();

};
