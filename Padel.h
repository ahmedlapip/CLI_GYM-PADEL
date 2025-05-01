#pragma once

#include <string>
#include <unordered_map>

#include "Court.h"
using namespace std;

class Padel {
    string name;
    int workingHours;
    string startTime;
    string endTime;
    string manager;
    unordered_map<string, Court> courts;
    unordered_map<string, Booking> bookings;

public:
    Padel ();
    Padel(string name, int workingHours, string startTime, string endTime, string manager);
    ~Padel();

    void setName(string n);
    void setWorkingHours(int hours);
    void setStartTime( string st);
    void setEndTime(string et);
    void setManager(string m);

    string getName() ;
    int getWorkingHours();
    string getStartTime();
    string getEndTime();
    string getManager();

    unordered_map<string, Court> getCourts();
    unordered_map<string, Booking> getBookings();


    void addCourt(Court court);
    bool removeCourt (Court court);
    void updateCourt();
    Court searchCourt(string name);
    void displayAllCourts();

    bool bookCourt(Booking booking);
    bool removeBooking(Booking booking);
};