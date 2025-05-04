#include "Coatch1.h"

//constructor
Coatch1::Coatch1(string name,string id, string password) {
	this->name = name;
	this->id = id;
	this->password = password;
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
void Coatch1::removeClass( string className) {
    for (auto it = classAssignments.begin(); it != classAssignments.end(); ++it) {
        if (it->name == className) {
            classAssignments.erase(it);
            cout << "Class removed successfully.\n";
            return;
        }
    }
    cout << "Class not found.\n";
}
//displayClasses
void Coatch1::displayClasses() {
    cout << "Assigned Classes:\n";
    for (const auto& gymClass : classAssignments) {
        cout << "- " << gymClass.getname() << endl;
    }
}


