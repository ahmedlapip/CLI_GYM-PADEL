#pragma once
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
};

