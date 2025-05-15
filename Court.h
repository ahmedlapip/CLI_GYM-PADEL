#pragma once

#include <string>
using namespace std;

class Court {
    string name_code;
    float pricePerHour;
    bool isAvailable;
    string location;
    public:
    Court ();
    Court(string name_code, float pricePerHour, string location, bool isAvailable);
    ~Court();

    void setName_code(string name_code);
    void setPricePerHour(float pricePerHour);
    void setLocation(string location);
    void setIsAvailable(bool isAvailable);

    string getName_code();
    float getPricePerHour();
    string getLocation();
    bool getIsAvailable();
    

    // functions
    void displayCourtInfo();
    string courts_to_string();
    
};
