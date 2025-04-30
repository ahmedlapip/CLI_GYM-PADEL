#include "Trainee.h"

<<<<<<< HEAD
Trainee::Trainee(string name, string dob, string email, string password, string gender,
                 string phone, string type, bool gymOrPadel, bool assigned,
                 float userHeight, float userWeight, float userCalPerMin, Subscription sub)
    : User(name, dob, email, password, gender, phone, type, gymOrPadel, assigned), subscription(sub)
{
    this->height = userHeight;
    this->weight = userWeight;
    this->calPerMin = userCalPerMin;
    this->subscription = sub;
}
=======
int Trainee::id = 0;

Trainee::Trainee() = default;

Trainee::Trainee(string name, string phone, string gender, string dateOfBirth, string email, string password, bool gymOrPadel) {
    userId = ++id;
    this->name = name;
    this->phone = phone;
    this->gender = gender;
    this->dateOfBirth = dateOfBirth;
    this->email = email;
    this->password = password;
    this->gymOrPadel = gymOrPadel;
}

Trainee::~Trainee() {
    this->userId = 0;
    this->name = "";
    this->phone = "";
    this->gender = "";
    this->dateOfBirth = "";
    this->email = "";
    this->password = "";
    this->gymOrPadel = false;
}


int Trainee::getId() { return this->userId; }
string Trainee::getName() { return this->name; }
string Trainee::getPhone() { return this->phone; }
string Trainee::getGender() { return this->gender; }
string Trainee::getDateOfBirth() { return this->dateOfBirth; }
string Trainee::getEmail() { return this->email; }
string Trainee::getPassword() { return this->password; }
bool Trainee::getGymOrPadel() { return this->gymOrPadel; }

void Trainee::setName(string name) { this->name = name; }
void Trainee::setPhone(string phone) { this->phone = phone; }
void Trainee::setGender(string gender) { this->gender = gender; }
void Trainee::setDateOfBirth(string dateOfBirth) { this->dateOfBirth = dateOfBirth; }
void Trainee::setEmail(string email) { this->email = email; }
void Trainee::setPassword(string password) { this->password = password; }
void Trainee::setGymOrPadel(bool gymOrPadel) { this->gymOrPadel = gymOrPadel; }

void Trainee::subscribe(Subscription sub) {
    subscription = sub;
    sub.display();
}

void Trainee::renew_subscription(int period) {
    int currentPeriod = subscription.getPeriod();
    int newPeriod = currentPeriod + period;

    subscription.setPeriod(newPeriod);

    string newEndDate = subscription.end_date_calc(subscription.getStartDate(), subscription.getType(), newPeriod);
    subscription.setStartDate(subscription.getStartDate());
    subscription.setPrice(subscription.manage_discount(subscription.getPrice()));
    cout << "Subscription renewed. New end date: " << newEndDate << endl;
}


void Trainee::delete_subscription() {
    subscription = Subscription();
    cout << "Subscription deleted successfully." << endl;
}


>>>>>>> 4ae143ecec2b8c329adb42e47c39ea1d4f22ea99
