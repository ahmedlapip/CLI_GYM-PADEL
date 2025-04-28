#include "Padel.h"
Padel:: Padel() = default ;
Padel::Padel(string name, int workingHours, string startTime, string endTime, string manager) {
    this->name = name;
    this->workingHours = workingHours;
    this->startTime = startTime;
    this->endTime = endTime;
    this->manager = manager;
}

Padel::~Padel() {}

void Padel::setName( string n) { this->name = n; }
void Padel::setWorkingHours( hours) { this->workingHours = hours; }
void Padel::setStartTime( string st) { this->startTime = st; }
void Padel::setEndTime( string et) { this->endTime = et; }
void Padel::setManager( string& m) { this->manager = m; }

string Padel::getName() { return name; }
int Padel::getWorkingHours()  { return workingHours; }
string Padel::getStartTime() { return startTime; }
string Padel::getEndTime()  { return endTime; }
string Padel::getManager() { return manager; }

void Padel::addTrainee( Trainee trainee) { trainees.push_back(trainee); }
void Padel::addCourt( Court court) { courts.push_back(court); }

list<Trainee> Padel::getTrainees() { return trainees; }
list<Court> Padel::getCourts() { return courts; }