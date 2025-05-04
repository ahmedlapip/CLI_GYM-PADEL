#include "Receptionist.h"

//constructor
Receptionist::Receptionist(string name, string id, string password) {
	this->name = name;
	this->id = id;
	this->password = password;
}
//setter
void Receptionist::setname(string name) {
	this->name = name;
}
void Receptionist::setid(int id) {
	this->id = id;
}
void Receptionist::setpassword(string password) {
	this->password = password;
}
void Receptionist::settrainees(list<Trainee> trainees) {
    this->trainees = trainees;
}
//getter
string Receptionist::getname() {
	return name;
}
string Receptionist::getid() {
	return id;
} 
list<Trainee>Receptionist::gettrainees() {
    return trainees;
}
string Receptionist::getpassword() {
	return password;
}
//update
void  Receptionist::UpdateReceptionistInfo(string newname, string newpassword) {
	name = newname;
	password = newpassword;
}
//destructor
Receptionist::~Receptionist() {

}
//registerTrainee
void Receptionist::registerTrainee(Trinee train) {
    trainees.push_back(train);
    cout << "Trainee registered successfully.\n";
}
//remove
void Receptionist::removeTrainee(string id) {
    for (auto it = trainees.begin(); it != trainees.end(); ++it) {
        if (it->getID() == id) {
            trainees.erase(it);
            cout << "Trainee removed.\n";
            return;
        }
    }
    cout << "Trainee not found.\n";
}
//viewTrainee
void Receptionist::viewTrainee() {
    if (trainees.empty()) {
        cout << "No trainees registered.\n";
        return;
    }
    for (const auto& t : trainees) {
        t.getname();
    }
}
