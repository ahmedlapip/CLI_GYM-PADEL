#include "Trainee.h"

Trainee::Trainee(string name, string dob, string email, string password, string gender,
                 string phone, string type, bool gymOrPadel, bool assigned,
                 float userHeight, float userWeight, float userCalPerMin, Subscription sub)
    : User(name, dob, email, password, gender, phone, type, gymOrPadel, assigned), subscription(sub)
{
    this->height = userHeight;
    this->weight = userWeight;
    this->calPerMin = userCalPerMin;
    this->subscription = sub;
}
