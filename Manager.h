#pragma once
#include "Coatch1.h"
#include<list>
class Manager 
{
private:
	string name;
	int id;
	string password;
	list<Coatch1> coaches;
public:
	//constructor
	Manager(string name, int id, string password);
	//setter
	void setname(string name);
	void setid(int id);
	void setpassword(string password);
	void setcoaches(list<Coatch1> coaches);
	//getter
	string getname();
	int getid();
	string getpassword();
	list<Coatch1> getcoaches();
	// Update 
	void updateMangerInfo(string newname, string newpassword);
	//destructor
	~Manager();
	
	// Add a coach
	void addCoach(Coatch1 coach);
	// Remove a coach by ID
	void removeCoach(string coachID);
	// View all coaches
	void viewCoaches();
	

};


