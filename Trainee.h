<<<<<<< HEAD
#pragma once

#include <iostream>
#include <list>
#include "Subscription.h"


class Trainee {
	int userId;
	static int id;
	string name, phone, gender, dateOfBirth, email, password;
	bool gymOrPadel; //1 for gym, 0 for padel
	Subscription subscription;
	// list<GymClass> gymClasses;
	list<PadelCourt> courts;

public:
	Trainee(int userId,string name, string phone, string gender, string dateOfBirth, string email, string password, bool gymOrPadel);
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

};
=======
#pragma once
#include <iostream>
#include <list>

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
    Subscription getSubscription();

    void setName(string name);
    void setPhone(string phone);
    void setGender(string gender);
    void setDateOfBirth(string dateOfBirth);
    void setEmail(string email);
    void setPassword(string password);
    void setGymOrPadel(bool gymOrPadel);
    void setIsVIP(bool isVIP);
	void setSubscription(Subscription subscription);

    void subscribe(Subscription subscription);
    void renew_subscription(int period);
    void view_workout_history();
    void delete_subscription();

};
>>>>>>> eb6e297757de2e3fa9e8fc7a7f9a1a93e2125880
