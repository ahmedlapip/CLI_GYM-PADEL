#include "Booking.h"
Booking::Booking();
Booking::Booking( string day,string startTime, float timePeriod ,bool isConfirmed ) {

    this->day = day;
    this->startTime = startTime;
    this->endTime = calculateEndTime( startTime, timePeriod);
    this->timePeriod = timePeriod;
    this->price = calcprice(timePeriod);
    this->isConfirmed = false ;
}

Booking::~Booking() {}


void Booking::setDay(const string& d) { this->day = d; }
void Booking::setStartTime(float st) { this->startTime = st; }
void Booking::setEndTime(float et) { this->endTime = et; }
void Booking::setTimePeriod(float tp) { this->timePeriod = tp; }
void Booking::setisCongfirmed (bool ic){this->isConfirmed =ic  ;}

string Booking::getTraineeName()  { return traineeName; }
string Booking::getDay()  { return day; }
string Booking::getStartTime() { return startTime; }
string Booking::getEndTime()  { return endTime; }
float Booking::getTimePeriod()  { return timePeriod; }
bool  Booking:: getisConfirmed() {return isConfirmed ;}


string Booking calculateEndTime( string start, int durationHours) {
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

float Booking :: calcPrice (int timeperiod ){
    Court c;
    return c.pricePerHour * timeperiod ;
}
bool Booking :: confirmBooking () {
    if (!isConfirmed){
        isConfirmed=true ;
        return true ;
    }
    return false ;

}
bool Booking::cancelBooking() {
    if (isConfirmed) {
        isConfirmed = false;
        return true;
    }
    return false;
}
bool Booking::updateBooking(string newStart,int newTimePeriod ){
    this->starTime =newStart ;
    this->timePeriod =
    return true;
}
void Booking :: displayBookingInfo() {
    cout<<"startTime "<< startTime ;
    cout<<"endTime "<< endTime ;
    cout<<"total price per duration " << price ;
}

