#include "Subscription.h"
<<<<<<< HEAD

Subscription::Subscription(string startDate, string endDate, float price, float discount) {
    this->startDate = startDate;
    this->endDate = endDate;
    this->price = price;
    this->discount = discount;
=======
#include "Trainee.h"
#include <random>

Subscription::Subscription() = default;

Subscription::Subscription(Trainee trainee, string startDate, bool type, int period) {
    this->id = startDate + '_' + to_string(trainee.getId());
    this->startDate = startDate;
    this->endDate = end_date_calc(startDate, type, period);
    this->period = period;
    this->type = type;
    if (type) this->price = 3000.0f * (float)period;
    else this->price = 300.0f * (float)period;;
    if ((period >= 5 && !type) || (period >= 2 && type)) this->price = manage_discount(price);
    else this->price = price;
}

Subscription::~Subscription() {
    this->startDate = "";
    this->period = 0;
    this->type = false;
    this->price = 0.0;
}

string Subscription::getID() { return this->id; }
string Subscription::getStartDate() { return this->startDate; }
int Subscription::getPeriod() { return this->period; }
float Subscription::getPrice() { return this->price; }
bool Subscription::getType() { return this->type; }

void Subscription::setStartDate(string startDate) { this->startDate = startDate; }
void Subscription::setPeriod(int period) { this->period = period; }
void Subscription::setPrice(float price) { this->price = price; }
void Subscription::setType(bool type) { this->type = type; }

string Subscription::end_date_calc(string startDate, bool type, int period) {
    // 11-2-2026
    // 1-10-2026
    // 1-1-2026
    // 11-10-2026
    int day, month, year;
    int flag = 0;
    for (int i = 0; i < startDate.length(); i++) {
        if (startDate[i] == '-' && (i == 1 || i == 2)) {
            string x = startDate.substr(flag, i);
            day = stoi(x);
            flag = i + 1;
        }
        if (startDate[i] == '-' && (i == 4 || i == 5)) {
            string x = startDate.substr(flag, i - 3);
            month = stoi(x);
            flag = i + 1;
        }
    }
    string x = startDate.substr(startDate.length() - 4, 5);
    year = stoi(x);
    if (type) year += period;
    else month += period;
    string end = to_string(day) + "-" + to_string(month) + "-" + to_string(year);
    return end;
}

float Subscription::manage_discount(float price) {
    // float discount = (rand() % 25 + 1)/100.0f;
    // float finalPrice = price * (1 - discount);
    // cout << discount << endl;
    // return finalPrice;
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dist(5, 40);
    int discount = dist(gen);
    float discountAmount = price * (discount / 100.0f);
    float finalPrice = price - discountAmount;
    cout << "Applied " << discount << "% discount. You saved $" << discountAmount << "!\n";
    cout << "The Final Price: $" << finalPrice << endl;
    return finalPrice;
}


void Subscription::display() {
    cout << this->endDate << endl;
    cout << this->price << endl;
>>>>>>> 4ae143ecec2b8c329adb42e47c39ea1d4f22ea99
}
