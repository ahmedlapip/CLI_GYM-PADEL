#pragma once

#include <string>
#include "Booking.h"
#include "Court.h"
using namespace std;

class Court {
    string name;
    static int id;
    int courtId;
    float pricePerHour ;
    bool isBooked;
    string location;
    public:
    Court ();
    Court(string name, float pricePerHour, string location, bool isBooked);
    ~Court();

    void setName(string n);
    void setPrice(float p);
    void setLocation(string loc);
    void setIsBooked (bool b);

    string getName();
    int getId();
    float getPrice();
    string getLocation();
    bool getIsBooked ();
    

    // functions
    bool isAvailable();
    void displayCourtInfo();
    
};
