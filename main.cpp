#include <iostream>


using namespace std;

int main() {
    vector<ClassRoom> classes;
    classes.push_back(ClassRoom(15, "Yoga", "9AM - 10AM", 10, false));
    classes.push_back(ClassRoom(10, "Padel", "11AM - 12PM", 8, true));
    classes.push_back(ClassRoom(20, "CrossFit", "5PM - 6PM", 12, false));
    classes.push_back(ClassRoom(12, "Boxing", "1PM - 2PM", 9, true));
    classes.push_back(ClassRoom(8, "Pilates", "7AM - 8AM", 6, false));
    classes.push_back(ClassRoom(25, "Strength", "6PM - 7PM", 15, false));
    return 0;
}