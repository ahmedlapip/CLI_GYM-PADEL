#include "User.h"

int User::id = 0;

User::User(string name, string dob, string email, string password, string gender, string phone, string type, bool gymOrPadel, bool assigned) {
    userId = ++id;
    this->name = move(name);
    this->dob = move(dob);
    this->email = move(email);
    this->gender = move(gender);
    this->phone = move(phone);
    this->password = move(password);
    this->type = move(type);
    this->gymOrPadel = gymOrPadel;
    this->assigned = assigned;
}
