#pragma once
#include <iostream>
using namespace std;

class Subscription {
	
    string startDate, endDate;
    int period; //period[1 year, 6 months, 3 months] only 3 values (1,6,3)
    float price;
    int id;
    int traineeID;

    public:
    Subscription();
    Subscription(int id, int traineeID,string startDate, int period);
    Subscription(int id, int traineeID,string startDate, int period, string endDate, float price );
    ~Subscription();


    string getStartDate();
    string getEndDate();
    int getPeriod();
    float getPrice();
    int getID();
    int getTraineeID();


    void setStartDate(string startDate);
    void setEndDate(string endDate);
    void setPeriod(int period);
    void setPrice(float price);
    void setID(int id);
    void setTraineeID(int traineeID);


    string end_date_calc(string startDate, int period);
    float manage_discount(float price);
    void display();
	int return_year(string date);
	int return_month(string date);

};

