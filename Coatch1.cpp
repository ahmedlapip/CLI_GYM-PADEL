#include "Coatch1.h"
#include "GymClass.h"

//constructor
Coatch1::Coatch1(string name,string id, string password,float sal) {
	this->name = name;
	this->id = id;
	this->password = password;
    this->salary = sal;
}
//setter
void Coatch1::setname(string name) {
	this->name = name;
}
void Coatch1::setid(int id) {
	this->id = id;
}
void Coatch1::setpassword(string password) {
	this->password= password;
}
void Coatch1::setClassAssignments(list<GymClass> classAssignments) {
    this->classAssignments = classAssignments;
}
//getter
string Coatch1::getname()const{
	return name;
}
string Coatch1::getid() {
    return id;
}
string Coatch1::getpassword() {
	return password;
}
list<GymClass>Coatch1::getClassAssignments() {
    return classAssignments;
}
//update
void Coatch1::updateCoachInfo(string newname, string newpassword) {
	name = newname;
	password = newpassword;
}
//destructor
Coatch1::~Coatch1() {
   // cout << "Destructor called"<<endl;
}
//add class
void Coatch1::addClass( GymClass gymClass) {
    classAssignments.push_back(gymClass);
    cout << "Class added successfully.\n";
}
//remove class
bool Coatch1::removeClass( string className) {
    bool found = false;
    for (auto it = classAssignments.begin(); it != classAssignments.end(); ++it) {
        if (it->getname_code() == className) {
            found = true;
            classAssignments.erase(it);       
            return true;
            break;
        }
    }
    if (!found)
    {
        return false;
    }
}
//displayClasses
void Coatch1::displayClasses() {
    cout << "Assigned Classes:\n";
    for (auto it = classAssignments.begin(); it != classAssignments.end(); ++it) {
        cout << "- " << it->getname_code() << endl;
    }
}


