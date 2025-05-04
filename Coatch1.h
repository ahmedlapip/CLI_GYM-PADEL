#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
class Coatch1 
{
private:
	string name;
	string id;
	string password;
	list<GymClass> classAssignments;
public:
	//constructor
	Coatch1(string name,string Id, string password);
	//setter
	void setname(string name);
	void setid(int id);
	void setpassword(string password);
	void setClassAssignments(list<GymClass> classAssignments);
	//getter
	string getname()const;
	string getid();
	string getpassword();
	list<GymClass> getClassAssignments();
	// Update 
	void updateCoachInfo(string newname, string newpassword);
	//destructor
	~Coatch1();
	//add
	void addClass( GymClass gymClass);
	//remove
	void removeClass( string className);
	//display
	void displayClasses();
};