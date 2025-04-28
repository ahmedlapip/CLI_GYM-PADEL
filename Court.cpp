#include "Court.h"

int Court::id = 0;

Court::Court() = default;
Court::Court(string name, float price, string location, bool isBooked) {
    this->name = name;
    this->courtId = ++id;
    this->pricePerHour = price;
    this->location = location;
    this->isBooked = isBooked;
}

Court::~Court() {
    this->isBooked = false;
    this->courtId = 0;
    this->pricePerHour = 0;
    this->location.clear();
    this->name.clear();
}

void Court::setName(string n) { this->name = n; }
void Court::setPrice(float p) { this->pricePerHour = p; }
void Court::setLocation(string loc) { this->location = loc; }
void Court::setIsBooked (bool b) {this-> isBooked = b ;}


string Court::getName() { return name; }
int Court::getId() { return courtId; }
float Court::getPrice() { return pricePerHour; }
string Court::getLocation() { return location; }
bool Court :: getIsBooked () {return isBooked ;}


bool Court::isAvailable() {
    if (isBooked) return false;
    return true;
}

void Court::displayCourtInfo() {
    cout << "Court ID: " << courtId << endl;
    cout << "Location: " << location << endl;
    cout << "Price: " << pricePerHour << endl;
}

