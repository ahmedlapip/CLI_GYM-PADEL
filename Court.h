#include <string>
#include <list>
#include "Booking.h"
using namespace std;

class Court {
private:
    int totalTrainees  ;
    string name;
    int id;
    float pricePerHour ;
    bool isBooked;
    string location;
    list<Booking> bookings;
    list<Tainee> trainee;
public:
    Court ();
    Court(string name = "", string id = "", float pricePerHour = 0, string location = "", bool isBooked = "");
    ~Court();

    void setName(string n);
    void setId( string i);
    void setPrice(float p);
    void setLocation( string loc);
    void settotalTrainees (int t)
    void setisBooked (bool b)

    string getName() ;
    string getId() ;
    float getPrice() ;
    string getLocation();
    int gettotalTrainees ();
    bool getisBooked ();

    list<Trainee> getTrainees();
    list<Booking> getBookings() ;
    

    // functions 
    bool bookCourt(Booking* booking);
    bool releaseCourt();
    bool isAvailable() ;
    void displayCourtInfo() ;

    
};
