<<<<<<< HEAD
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


int Trainee::getId() { return this->id++; }
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
=======
#include "Trainee.h"

int Trainee::id = 0;

Trainee::Trainee() = default;

Trainee::Trainee(string name, string phone, string gender, string dateOfBirth, string email, string password, bool gymOrPadel, bool isVIP) 
        : subscription(subscription) {
    userId = ++id;
    this->name = name;
    this->phone = phone;
    this->gender = gender;
    this->dateOfBirth = dateOfBirth;
    this->email = email;
    this->password = password;
    this->gymOrPadel = gymOrPadel;
    this->isVIP = isVIP;
}

Trainee::~Trainee() {
    this->userId = 0;
    this->name.clear();
    this->phone.clear();
    this->gender.clear();
    this->dateOfBirth.clear();
    this->email.clear();
    this->password.clear();
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
bool Trainee::getIsVIP() { return this->isVIP; }
Subscription Trainee::getSubscription() { return this->subscription; }

void Trainee::setName(string name) { this->name = name; }
void Trainee::setPhone(string phone) { this->phone = phone; }
void Trainee::setGender(string gender) { this->gender = gender; }
void Trainee::setDateOfBirth(string dateOfBirth) { this->dateOfBirth = dateOfBirth; }
void Trainee::setEmail(string email) { this->email = email; }
void Trainee::setPassword(string password) { this->password = password; }
void Trainee::setGymOrPadel(bool gymOrPadel) { this->gymOrPadel = gymOrPadel; }
void Trainee::setIsVIP(bool isVIP) { this->isVIP = isVIP; }
void Trainee::setSubscription(Subscription subscription) { this->subscription = subscription; }

void Trainee::subscribe(Subscription sub) {

    if (isVIP) {
        sub.setPrice((sub.getPrice() + 200) * sub.getPeriod());
        sub.setPrice(sub.manage_discount(sub.getPrice()));
	}
	else {
		sub.setPrice(sub.getPrice() * sub.getPeriod());
	}
    subscription = sub;
    sub.display();
}

void Trainee::renew_subscription(int period) {
    int currentPeriod = subscription.getPeriod();
	if (currentPeriod == 0) {
		cout << "No active subscription to renew." << endl;
		return;
	}
    int newPeriod = currentPeriod + period;

    subscription.setPeriod(newPeriod);

    string newEndDate = subscription.end_date_calc(subscription.getStartDate(), subscription.getType(), newPeriod);
	subscription.setEndDate(newEndDate);
    if (isVIP) subscription.setPrice(subscription.manage_discount((subscription.getPrice() / currentPeriod) * period));
	else subscription.setPrice((subscription.getPrice() / currentPeriod) * period);
    subscription.display();
}

void Trainee::delete_subscription() {
    subscription = Subscription();
    cout << "Subscription deleted successfully." << endl;
}

void Trainee::view_workout_history() {
    for(auto i : workout_history) {
        cout << i << endl;
    }
}



>>>>>>> eb6e297757de2e3fa9e8fc7a7f9a1a93e2125880
