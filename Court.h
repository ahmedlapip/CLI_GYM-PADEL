#pragma once

#include <string>
using namespace std;

class Court {
    string name;
    static int id;
    int courtId;
    float pricePerHour;
    bool isAvailable;
    string location;
    public:
    Court ();
    Court(string name, float pricePerHour, string location, bool isAvailable);
    ~Court();

    void setName(string n);
    void setPrice(float p);
    void setLocation(string loc);
    void setIsAvailable(bool b);

    string getName();
    int getId();
    float getPrice();
    string getLocation();
    bool getIsAvailable();
    

    // functions
    void displayCourtInfo();
    string courts_to_string();
    
};
