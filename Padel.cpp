#include "Padel.h"


Padel::Padel() = default;
Padel::Padel(string name, int workingHours, string startTime, string endTime, string manager) {
    this->name = name;
    this->workingHours = workingHours;
    this->startTime = startTime;
    this->endTime = endTime;
    this->manager = manager;
}

Padel::~Padel() {
    this->name.clear();
    this->workingHours = 0;
    this->startTime.clear();
    this->endTime.clear();
    this->manager.clear();
}

void Padel::setName( string n) { this->name = n; }
void Padel::setWorkingHours(int hours) { this->workingHours = hours; }
void Padel::setStartTime(string st) { this->startTime = st; }
void Padel::setEndTime( string et) { this->endTime = et; }
void Padel::setManager(string m) { this->manager = m; }

string Padel::getName() { return name; }
int Padel::getWorkingHours()  { return workingHours; }
string Padel::getStartTime() { return startTime; }
string Padel::getEndTime()  { return endTime; }
string Padel::getManager() { return manager; }

unordered_map<string, Court> Padel::getCourts() { return courts; }
unordered_map<string, Booking> Padel::getBookings() { return bookings; }

void Padel::addCourt(Court court) { courts[court.getName()] = court; }
bool Padel::removeCourt(Court court) {
    if (courts.empty()) return false;
    if (!courts.contains(court.getName())) return false;
    courts.erase(court.getName());
    return true;
}

bool Padel::bookCourt(Booking booking) {
    if (bookings.contains(booking.getId()) && booking.getisConfirmed()) return false;
    bookings[booking.getId()] = booking;
    booking.setisCongfirmed(true);
    return true;
}
bool Padel::removeBooking(Booking booking) {
    if (bookings.empty()) return false;
    if (!bookings.contains(booking.getId())) return false;
    bookings.erase(booking.getId());
    return true;
}
