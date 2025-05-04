#pragma once
#include <string>
#include <functional> 
#include <cmath> 
#include "Trainee.h"
#include "Court.h"
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
    Trainee trainee;
    Court court;

    public:
    Booking();
    Booking(Trainee trainee, Court court, string day, string startTime, float timePeriod);
    ~Booking();

    void setDay(string d);
    void setStartTime(string st);
    void setEndTime(string et);
    void setTimePeriod(float tp);
    void setIsConfirmed (bool ic);

    string getId();
    string getDay();
    string getStartTime();
    string getEndTime();
    float getTimePeriod();
    bool getIsConfirmed();

    bool confirmBooking();
    bool updateBooking(string newStart, int newTimePeriod);
    void displayBookingInfo();

    string calculateEndTime(string start, float durationHours);

    string bookings_to_string();
};