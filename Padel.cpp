#include "Padel.h"

#include <sstream>
#include <cmath>

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

void Padel::setName(string n) { this->name = n; }
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
    if (courts.find(court.getName()) == courts.end()) return false;
    courts.erase(court.getName());
    return true;
}


bool Padel::bookCourt(Booking booking) {
    if (!booking.confirmBooking()) return false;

    string id = booking.getId();
    // Reject duplicate ID
    if (bookings.find(id) != bookings.end()) {
        cout << "Booking with ID " << id << " already exists!\n";
        return false;
    }

    // Helper to convert "HH:MM" → total minutes
    auto toMinutes = [](const string& hhmm) {
        int h, m; char c;
        stringstream ss(hhmm);
        ss >> h >> c >> m;
        return h * 60 + m;
        };

    int newStart = toMinutes(booking.getStartTime());
    int newEnd = toMinutes(booking.getEndTime());

    // Check for time-overlap on same day
    for (auto it = bookings.begin(); it != bookings.end(); ++it) {
        string otherId = it->first;
        Booking existing = it->second;

        if (existing.getDay() != booking.getDay())
            continue;

        int exStart = toMinutes(existing.getStartTime());
        int exEnd = toMinutes(existing.getEndTime());

        // overlap if NOT (newEnd ≤ exStart || newStart ≥ exEnd)
        if (!(newEnd <= exStart || newStart >= exEnd)) {
            cout << "Booking overlaps with existing ID "
                << otherId << " on " << booking.getDay() << "\n";
            return false;
        }
    }


    // No conflicts—insert & return success
    bookings[id] = booking;
    return true;
}

bool Padel::removeBooking(Booking booking) {
    if (bookings.find(booking.getId()) == bookings.end()) return false;
    bookings.erase(booking.getId());
    return true;
}
