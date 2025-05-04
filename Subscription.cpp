//#include "Subscription.h"
//#include <random>
//#include <string>
//
//int Subscription::id = 0;
//
//Subscription::Subscription() = default;
//
//Subscription::Subscription(string startDate, bool type, int period) {
//    this->subId = ++id;
//    this->startDate = startDate;
//    this->endDate = end_date_calc(startDate, type, period);
//    this->period = period;
//    this->type = type;
//	if (type) this->price = 3000.0f; // 1 year
//	else this->price = 300.0f; // 1 month
//}
//
//Subscription::~Subscription() {
//    this->startDate.clear();
//    this->period = 0;
//    this->type = false;
//    this->price = 0.0;
//}
//
//int Subscription::getID() { return this->subId; }
//string Subscription::getStartDate() { return this->startDate; }
//string Subscription::getEndDate() { return this->endDate; }
//int Subscription::getPeriod() { return this->period; }
//float Subscription::getPrice() { return this->price; }
//bool Subscription::getType() { return this->type; }
//
//void Subscription::setStartDate(string startDate) { this->startDate = startDate; }
//void Subscription::setEndDate(string endDate) { this->endDate = endDate; }
//void Subscription::setPeriod(int period) { this->period = period; }
//void Subscription::setPrice(float price) { this->price = price; }
//void Subscription::setType(bool type) { this->type = type; }
//
//string Subscription::end_date_calc(string startDate, bool type, int period) {
//    // 11-2-2026
//    // 1-10-2026
//    // 1-1-2026
//    // 11-10-2026
//    int day, month, year;
//    int flag = 0;
//    for (int i = 0; i < startDate.length(); i++) {
//        if (startDate[i] == '-' && (i == 1 || i == 2)) {
//            string x = startDate.substr(flag, i);
//            day = stoi(x);
//            flag = i + 1;
//        }
//        if (startDate[i] == '-' && (i == 4 || i == 5)) {
//            string x = startDate.substr(flag, i - 3);
//            month = stoi(x);
//            flag = i + 1;
//        }
//    }
//    string x = startDate.substr(startDate.length() - 4, 5);
//    year = stoi(x);
//    if (type) year += period;
//    else month += period;
//    string end = to_string(day) + "-" + to_string(month) + "-" + to_string(year);
//    return end;
//}
//
//float Subscription::manage_discount(float price) {
//    static random_device rd;
//    static mt19937 gen(rd());
//    uniform_int_distribution<> dist(5, 40);
//    int discount = dist(gen);
//    float discountAmount = price * (discount / 100.0f);
//    float finalPrice = price - discountAmount;
//    cout << "Applied " << discount << "% discount. You saved $" << discountAmount << "!\n";
//    return finalPrice;
//}
//
//void Subscription::display() {
//    cout << "The Subscription will end at " << endDate << endl;
//    cout << "The Price: " << price << endl;
//}
