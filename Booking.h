#pragma once
#include <string>
#include "Trainee.h"
using namespace std;

class Booking {
    static int count;
    string id;
    string day;
    float price ;
    string startTime;
    string endTime;
    float timePeriod;
    bool isConfirmed;

    public:
    Booking ();
    Booking(Trainee trainee, Court court, string day, string startTime, float timePeriod , bool isConfirmed);
    ~Booking();

    void setDay(string d);
    void setStartTime(float st);
    void setEndTime(float et);
    void setTimePeriod(float tp);
    void setisCongfirmed (bool ic);

    string getId();
    string getDay();
    string getStartTime();
    string getEndTime() ;
    float getTimePeriod() ;
    bool getisConfirmed();

    bool confirmBooking();
    bool cancelBooking();
    bool updateBooking(string newStart, int newTimePeriod);
    void displayBookingInfo();

    string calculateEndTime(string start, float durationHours);

};
