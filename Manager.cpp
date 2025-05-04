#include "Manager.h"
#include "Coatch1.h"
#include <iostream>
using namespace std;

//constructor
Manager::Manager(string name, int id, string password) {
    this->name = name;
    this->id = id;
    this->password = password;
}
//setter
void Manager::setname(string name) {
    this->name = name;
}
void Manager::setid(int id) {
    this->id = id;
}
void Manager::setpassword(string password) {
    this->password = password;
}
void Manager::setcoaches(list<Coatch1> coaches) {
    this->coaches = coaches;
}
//getter
string Manager::getname() {
    return name;
}
int Manager::getid() {
    return id;
}
string Manager::getpassword() {
    return password;
}

list<Coatch1> Manager::getcoaches() {
    return coaches;
}

// Update 
void Manager::updateMangerInfo(string newname, string newpassword) {
    this->name = newname;
    this->password = newpassword;
}
//destructor
Manager::~Manager() {

}
//add coatch
void Manager::addCoach(Coatch1 coatch) {
    coaches.push_back(coatch);
    cout << "Coach added successfully.\n";
}
//remove coatch
void Manager::removeCoach(string  coachID) {
    for (auto it = coaches.begin(); it != coaches.end(); ++it) {
        if (it->getid() == coachID) {
            coaches.erase(it);
            cout << "Coach removed successfully.\n";
            return;
        }
    }
    cout << "Coach not found.\n";
}
//viewCoaches
void Manager::viewCoaches() {
    if (coaches.empty()) {
        cout << "No coaches available.\n";
        return;
    }

    for (const auto& coach : coaches) {
        coach.getname();
    }
}
