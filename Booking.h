#include <string>
using namespace std;

class Booking {
private:
    string day;
    float price ;
    string startTime;
    string endTime;
    float timePeriod;
    bool isConfirmed;

public:
    Booking ();
    Booking( string day = "", string startTime = 0 , float timePeriod = 0  , bool isConfirmed = false );
    ~Booking();

    void setTraineeName(string name);
    void setDay(string d);
    void setStartTime(float st);
    void setEndTime(float et);
    void setTimePeriod(float tp);
    void setisCongfirmed (bool ic)

    string getTraineeName() ;
    string getDay() ;
    float getStartTime();
    float getEndTime() ;
    float getTimePeriod() ;
    bool getisConfirmed();

    bool confirmBooking();
    bool cancelBooking();
    bool updateBooking(string newStart, string newEnd);
    void displayBookingInfo() ;
    floatPrice (int timperiod );

    string calculateEndTime( string start, int durationHours);

};
