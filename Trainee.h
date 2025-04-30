#pragma once
<<<<<<< HEAD
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
=======
#include <iostream>
#include <list>


#include "GymClass.h"
#include "PadelCourt.h"
#include "Subscription.h"

using namespace std;

class Trainee {
    int userId;
    static int id;
    string name, phone, gender, dateOfBirth, email, password;
    bool gymOrPadel; //1 for gym, 0 for padel
    Subscription subscription;
    // list<GymClass> gymClasses;
    // list<PadelCourt> courts;

    public:
    Trainee(string name, string phone, string gender, string dateOfBirth, string email, string password, bool gymOrPadel);
    Trainee();
    ~Trainee();

    int getId();
    string getName();
    string getPhone();
    string getGender();
    string getDateOfBirth();
    string getEmail();
    string getPassword();
    bool getGymOrPadel();

    void setName(string name);
    void setPhone(string phone);
    void setGender(string gender);
    void setDateOfBirth(string dateOfBirth);
    void setEmail(string email);
    void setPassword(string password);
    void setGymOrPadel(bool gymOrPadel);

    void subscribe(Subscription subscription);
    void renew_subscription(int period);
    void view_history();
    void delete_subscription();

>>>>>>> 4ae143ecec2b8c329adb42e47c39ea1d4f22ea99
};
