#pragma once
#include <iostream>
#include <list>

//#include "Subscription.h"
#include "WorkoutPlan.h"
#include "Subscription.h"
using namespace std;

class GymClass;

class Trainee {
    int userId;
    static int id;
    string name, phone, gender, dateOfBirth, email, password;
    Subscription subscription;
    bool isVIP;
    int ClassID;
    
    
    //list<WorkoutPlan> workout_history;

    public:
    Trainee(string name, string phone, string gender, string dateOfBirth, string email, string password, bool gymOrPadel, bool isVIP);
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
    bool getIsVIP();
    Subscription getSubscription();
    void setId(int id);
    void setName(string name);
    void setPhone(string phone);
    void setGender(string gender);
    void setDateOfBirth(string dateOfBirth);
    void setEmail(string email);
    void setPassword(string password);
    void setGymOrPadel(bool gymOrPadel);
    void setIsVIP(bool isVIP);
	void setSubscription(Subscription subscription);

    //void subscribe(Subscription subscription);
   // void renew_subscription(int period);
    //void view_workout_history();
    //void delete_subscription();

    //void addWorkoutPlan(WorkoutPlan wp);
    //void removeWorkoutPlan(WorkoutPlan wp);
};
