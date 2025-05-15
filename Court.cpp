#include "Court.h"
#include <sstream>
#include <iostream>



Court::Court() = default;
Court::Court(string name_code, float pricePerHour, string location, bool isAvailable) {
    this->name_code = name_code;
    this->pricePerHour = pricePerHour;
    this->location = location;
	this->isAvailable = isAvailable;
}

Court::~Court() {
    this->name_code.clear();
    this->pricePerHour = 0;
    this->location.clear();
    this->isAvailable = false;
}

void Court::setName_code(string name_code) { this->name_code = name_code; }
void Court::setPricePerHour(float pricePerHour) { this->pricePerHour = pricePerHour; }
void Court::setLocation(string location) { this->location = location; }
void Court::setIsAvailable(bool isAvailable) { this->isAvailable = isAvailable; }


string Court::getName_code() { return name_code; }
float Court::getPricePerHour() { return pricePerHour; }
string Court::getLocation() { return location; }
bool Court::getIsAvailable() { return isAvailable; }


void Court::displayCourtInfo() {
    cout << "Court ID: " << name_code << endl;
    cout << "Location: " << location << endl;
    cout << "Price: " << pricePerHour << endl;
}

string Court::courts_to_string() {
	stringstream ss;
	ss << "ID=" << name_code << ", Location=" << location << ", Price=" << pricePerHour << ", Available=" << isAvailable;
	return ss.str();
}