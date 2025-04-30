#pragma once
<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class Subscription {
    string startDate, endDate;
    float price, discount;
    public:
    Subscription(string startDate, string endDate, float price, float discount);
    string getStartDate() {return startDate;}
    string getEndDate() {return endDate;}
    float getPrice() {return price;}
    float getDiscount() {return discount;}
    void setStartDate(string startDate) {this->startDate = startDate;}
    void setEndDate(string endDate) {this->endDate = endDate;}
    void setPrice(float price) {this->price = price;}
    void setDiscount(float discount) {this->discount = discount;}
=======
#include <iostream>
using namespace std;

class Trainee;

class Subscription {
    string id, startDate, endDate;
    int period; //period[1 year, 3 month as the user likes and the price will be calculated by a month cost]
    bool type; //type[annually - 1, monthly - 0]
    float price;

    public:
    Subscription(Trainee trainee, string startDate, bool type, int period);
    Subscription();
    ~Subscription();

    string getID();
    string getStartDate();
    bool getType();
    int getPeriod();
    float getPrice();
    float getDiscount();

    void setStartDate(string startDate);
    void setType(bool type);
    void setPeriod(int period);
    void setPrice(float price);
    void setDiscount(float discount);

    string end_date_calc(string startDate, bool type, int period);
    float manage_discount(float price);
    void display();

>>>>>>> 4ae143ecec2b8c329adb42e47c39ea1d4f22ea99
};

