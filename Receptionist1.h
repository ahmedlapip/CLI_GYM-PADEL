#pragma once
#include<iostream>
#include <unordered_map>
#include "Trainee.h"
using namespace std;
class Receptionist
{
private:
	string name;
	string id;
	string password;
	float salary;
	unordered_map<int,Trainee> trainees;
public:
	//constructor
	Receptionist(string name, string Id, string password,float salary);
	Receptionist();
	//setter
	void setname(string name);
	void setid(int id);
	void setpassword(string password);
	void setSalary(float salary);
	void settrainees(unordered_map<int,Trainee> trainees);
	
	//getter
	string getname();
	string getid();
	string getpassword();
	float getSalary();
	unordered_map<int,Trainee> gettrainees();
	// Update 
	void UpdateReceptionistInfo(string newname, string newpassword);
	//destructor
	~Receptionist();
	//add
	void registerTrainee(Trainee trainee);
	//remove
	void removeTrainee(int traineeID);
	//view member
	void viewTrainee();
};

