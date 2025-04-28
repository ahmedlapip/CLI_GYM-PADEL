#include "Court.h"
Court::Court();
Court::Court(string name, string id, float price, string location) {
    this->name = name;
    this->id = id;
    this->price = price;
    this->location = location;
}

Court::~Court() {}

void Court::setName(const string& n) { this->name = n; }
void Court::setId(const string& i) { this->id = i; }
void Court::setPrice(float p) { this->price = p; }
void Court::setLocation(const string& loc) { this->location = loc; }
void Court :: setisBooked (bool b) {this-> isBooked = b ;}


string Court::getName() const { return name; }
string Court::getId() const { return id; }
float Court::getPrice() const { return price; }
string Court::getLocation() const { return location; }
bool   Court :: getisBooked () {return isBooked ;}


list<Booking> Court::getBookings() const {
    return bookings;
}
list<Trainees> Court:: getTrainees const {
    return trainee;
}
