#include "Subscription.h"

Subscription::Subscription(string startDate, string endDate, float price, float discount) {
    this->startDate = startDate;
    this->endDate = endDate;
    this->price = price;
    this->discount = discount;
}
