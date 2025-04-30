#include "Booking.h"

#include <iomanip>
#include <sstream>

int Booking::count = 0;

Booking::Booking() = default;
Booking::Booking(Trainee trainee, Court court, string day,string startTime, float timePeriod ,bool isConfirmed ) {
    this->id = to_string(trainee.getId()) + to_string(court.getId()) + to_string(++count);
    this->day = day;
    this->startTime = startTime;
    this->endTime = calculateEndTime(startTime, timePeriod);
    this->timePeriod = timePeriod;
    this->price = court.getPrice() * timePeriod;
    this->isConfirmed = isConfirmed;
}

Booking::~Booking() {
    this->day.clear();
    this->startTime.clear();
    this->endTime.clear();
    this->timePeriod = 0;
    this->price = 0;
    this->isConfirmed = false;
}


void Booking::setDay(string d) { this->day = d; }
void Booking::setStartTime(float st) { this->startTime = st; }
void Booking::setEndTime(float et) { this->endTime = et; }
void Booking::setTimePeriod(float tp) { this->timePeriod = tp; }
void Booking::setisCongfirmed (bool ic){this->isConfirmed =ic  ;}

string Booking::getId()  { return this->id; }
string Booking::getDay()  { return day; }
string Booking::getStartTime() { return startTime; }
string Booking::getEndTime()  { return endTime; }
float Booking::getTimePeriod()  { return timePeriod; }
bool  Booking:: getisConfirmed() {return isConfirmed ;}


string Booking::calculateEndTime(string start, float durationHours) {
    int startHour, startMinute;
    char colon;

    stringstream ss(start);
    ss >> startHour >> colon >> startMinute;

    int totalMinutes = (startHour * 60) + startMinute;
    totalMinutes += durationHours * 60;

    int endHour = (totalMinutes / 60) % 24;
    int endMinute = totalMinutes % 60;

    string period = (endHour >= 12) ? "PM" : "AM";
    
    int displayHour = endHour % 12;
    if (displayHour == 0) displayHour = 12; 

    stringstream result;
    result << setfill('0') << setw(2) << displayHour << ":"
           << setfill('0') << setw(2) << endMinute << " " << period;

    return result.str();
}

bool Booking::confirmBooking () {
    if (!isConfirmed){
        isConfirmed = true;
        return true;
    }
    return false;

}
bool Booking::cancelBooking() {
    if (isConfirmed) {
        isConfirmed = false;
        return true;
    }
    return false;
}
bool Booking::updateBooking(string newStart,int newTimePeriod ){
    this->startTime = newStart ;
    this->timePeriod = newTimePeriod;
    return true;
}
void Booking::displayBookingInfo() {
    cout<<"startTime "<< startTime ;
    cout<<"endTime "<< endTime ;
    cout<<"total price per duration " << price ;
}

