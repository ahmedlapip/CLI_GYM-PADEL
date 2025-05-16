#include "Receptionist1.h"


//constructor
Receptionist::Receptionist(string name, string id, string password,float sal) {
    this->name = name;
    this->id = id;
    this->password = password;
    this->salary = sal;
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
void Receptionist::settrainees(unordered_map<int,Trainee> trainees) {
    this->trainees = trainees;
}
//getter
string Receptionist::getname() {
    return name;
}
string Receptionist::getid() {
    return id;
}
unordered_map<int,Trainee>Receptionist::gettrainees() {
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
void Receptionist::registerTrainee(Trainee train) {
    trainees.insert(make_pair(train.getId(),train));
    cout << "Trainee registered successfully.\n";
}
//remove
void Receptionist::removeTrainee(int id) {
    for (auto it = trainees.begin(); it != trainees.end(); ++it) {
        if (it->first == id) {
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
    for (auto t : trainees) {
        cout << t.first << "- " << t.second.getName() << endl;;
    }
}