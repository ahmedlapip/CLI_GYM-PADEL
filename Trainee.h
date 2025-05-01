#pragma once
#include <iostream>
#include <list>

#include "Court.h"
#include "Subscription.h"

using namespace std;

class Trainee {
    int userId;
    static int id;
    string name, phone, gender, dateOfBirth, email, password;
    bool gymOrPadel, isVIP; //1 for gym, 0 for padel
    Subscription subscription;
    list<string> workout_history;

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

    void setName(string name);
    void setPhone(string phone);
    void setGender(string gender);
    void setDateOfBirth(string dateOfBirth);
    void setEmail(string email);
    void setPassword(string password);
    void setGymOrPadel(bool gymOrPadel);
    void setIsVIP(bool isVIP);

    void subscribe(Subscription subscription);
    void renew_subscription(int period);
    void view_workout_history();
    void delete_subscription();

};
