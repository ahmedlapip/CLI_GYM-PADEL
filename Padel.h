#include <string>
#include <list>
#include "Court.h"
using namespace std;

class Padel {
private:
    string name;
    int workingHours;
    string startTime;
    string endTime;
    string manager;
    list<Trainee> trainees;
    list<Court> courts;

public:
    Padel ();
    Padel(string name = "", int workingHours = 0, string startTime = "", string endTime = "", string manager = "");
    ~Padel();

    void setName( string n);
    void setWorkingHours(int hours);
    void setStartTime( string st);
    void setEndTime(string et);
    void setManager(string m);

    string getName() ;
    int getWorkingHours();
    string getStartTime();
    string getEndTime();
    string getManager();

    list<Trainee> getTrainees();
    list<Court> getCourts();

  
    void addCourt( Court court);
     bool  removeCourt ();
    void updateCourt ();
    int gettotalCourts ();
    void displayAllCourts();
};