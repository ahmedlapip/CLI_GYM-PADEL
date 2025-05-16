#pragma once
#include <iostream>
#include <string>
#include <list>
#include "GymClass.h"
using namespace std;
class Coatch1 
{
private:
	string name;
	string id;
	string password;
	float salary;

	list<GymClass> classAssignments;
public:
	//constructor
	Coatch1(string name,string Id, string password,float salary);
	Coatch1() = default;
	//setter
	void setname(string name);
	void setid(int id);
	void setpassword(string password);
	void setSalary(float salary);
	void setClassAssignments(list<GymClass> classAssignments);
	//getter
	string getname()const;
	string getid();
	string getpassword();
	float getSalary();
	list<GymClass> getClassAssignments();
	// Update 
	void updateCoachInfo(string newname, string newpassword);
	//destructor
	~Coatch1();
	//add
	void addClass( GymClass gymClass);
	//remove
	bool removeClass( string className);
	//display
	void displayClasses();
	

};