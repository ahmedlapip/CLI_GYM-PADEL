#pragma once
#include <bits/stdc++.h>
using namespace std;

class User {
    static int id;
    int userId = 0;
    string name, dob, email, gender, phone ,password, type;
    bool gymOrPadel, assigned;
    public:

    User(string name, string dob, string email, string password, string gender, string phone, string type, bool gymOrPadel, bool assigned);

    string getName() {return name;}
    string getDob() {return dob;}
    string getEmail() {return email;}
    string getGender() {return gender;}
    string getPhone() {return phone;}
    string getPassword() {return password;}
    string getType() {return type;}
    bool getGymOrPadel() {return gymOrPadel;}
    bool getAssigned() {return assigned;}
    int getUserId() { return userId; }
    void setName(string name) {this->name = move(name);}
    void setDob(string dob) {this->dob = move(dob);}
    void setEmail(string email) {this->email = move(email);}
    void setGender(string gender) {this->gender = move(gender);}
    void setPhone(string phone) {this->phone = move(phone);}
    void setPassword(string password) {this->password = move(password);}
    void setType(string type) {this->type = move(type);}
    void setGymOrPadel(bool gymOrPadel) {this->gymOrPadel = gymOrPadel;}
    void setAssigned(bool assigned) {this->assigned = assigned;}

    

};
