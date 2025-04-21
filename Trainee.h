#pragma once
#include "User.h"
#include "Subscription.h"

class Trainee : public User {
    float height, weight, calPerMin;
    Subscription subscription;
public:
    Trainee(string name, string dob, string email, string password, string gender,
            string phone, string type, bool gymOrPadel, bool assigned,
            float userHeight, float userWeight, float userCalPerMin,
            Subscription subscription);

    float getHeight() {return height;}
    float getWeight() {return weight;}
    float getCalPerMin() {return calPerMin;}
    Subscription getSubscription() {return subscription;}
    void setHeight(float h) {height = h;}
    void setWeight(float w) {weight = w;}
    void setCalPerMin(float cp) {calPerMin = cp;}
    void setSubscription(Subscription sub) {subscription = sub;}
};
