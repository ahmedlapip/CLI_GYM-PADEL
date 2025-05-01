#include "Court.h"

int Court::id = 0;

Court::Court() = default;
Court::Court(string name, float price, string location, bool isAvailable) {
    this->name = name;
    this->courtId = ++id;
    this->pricePerHour = price;
    this->location = location;
	this->isAvailable = isAvailable;
}

Court::~Court() {
    this->courtId = 0;
    this->pricePerHour = 0;
    this->location.clear();
    this->name.clear();
}

void Court::setName(string n) { this->name = n; }
void Court::setPrice(float p) { this->pricePerHour = p; }
void Court::setLocation(string loc) { this->location = loc; }
void Court::setIsAvailable(bool b) { this->isAvailable = b; }


string Court::getName() { return name; }
int Court::getId() { return courtId; }
float Court::getPrice() { return pricePerHour; }
string Court::getLocation() { return location; }
bool Court::getIsAvailable() { return isAvailable; }


void Court::displayCourtInfo() {
    cout << "Court ID: " << courtId << endl;
    cout << "Location: " << location << endl;
    cout << "Price: " << pricePerHour << endl;
}

