#include "GymClass.h"
#include <string>

GymClass::GymClass() = default;
GymClass::GymClass(string name, int capacity, float startTime, float endTime, float timePeriod, int numberOfSessions, bool type,int coachid) {
	this->name_code = name;
	this->capacity = capacity;
	this->startTime = startTime;
	this->endTime = endTime;
	this->timePeriod = timePeriod;
	this->numberOfSessions = numberOfSessions;
	this->type = type;
	this->coachID = coachid;
	
}
GymClass::GymClass(string name, float startTime, string duration) {
	this->name_code = name;
	this->startTime = startTime;
	this->timePeriod = stof(duration);
	this->capacity = 0;
	this->endTime = 0;
	this->numberOfSessions = 0;
}
GymClass::~GymClass() {
	this->name_code.clear();
	this->capacity = 0;
	this->startTime = 0;
	this->endTime = 0;
	this->timePeriod = 0;
	this->numberOfSessions = 0;
	
}
void GymClass::setname_code(string name) { this->name_code = name; }
void GymClass::setCapacity(int capacity) { this->capacity = capacity; }
void GymClass::setStartTime(float startTime) { this->startTime = startTime; }
void GymClass::setEndTime(float endTime) { this->endTime = endTime; }
void GymClass::setTimePeriod(float timePeriod) { this->timePeriod = timePeriod; }
void GymClass::setNumberOfSessions(int numberOfSessions) { this->numberOfSessions = numberOfSessions; }

string GymClass::getname_code() { return name_code; }
int GymClass::getCapacity() { return capacity; }
float GymClass::getStartTime() { return startTime; }
float GymClass::getEndTime() { return endTime; }
float GymClass::getTimePeriod() { return timePeriod; }
int GymClass::getNumberOfSessions() { return numberOfSessions; }

void GymClass::addTraineeToClass(Trainee t) {
	if (ClassTrainees.size() < capacity) {
		ClassTrainees.push_back(t);
		for (auto wp : ClassWorkoutPlans) {
			t.addWorkoutPlan(wp);
		}
	}
	else {
		ClassWaitingList.push(t);
		cout << "Class is full. Added to waiting list." << endl;
	}
}
void GymClass::removeTraineeFromClass(Trainee t) {
	for (auto it = ClassTrainees.begin(); it != ClassTrainees.end(); ++it) {
		if (it->getId() == t.getId()) { 
			ClassTrainees.erase(it);
			break;
		}
	}
	if (!ClassWaitingList.empty()) {
		Trainee nextTrainee = ClassWaitingList.front();
		ClassWaitingList.pop();
		ClassTrainees.push_back(nextTrainee);
	}
}

void GymClass::addWorkoutPlan(WorkoutPlan wp) {
	ClassWorkoutPlans.push_back(wp);
	for (auto t : ClassTrainees) {
		t.addWorkoutPlan(wp);
	}
}
void GymClass::removeWorkoutPlan(string wpname) {
	WorkoutPlan* wp;
	for (auto it = ClassWorkoutPlans.begin(); it != ClassWorkoutPlans.end(); ++it) {
		if (it->getname_code() == wpname) {
			ClassWorkoutPlans.erase(it);	
			wp = new WorkoutPlan(it->getname_code(), it->getHoursPerDay(), it->getIntensity(), it->getLostCalories(), it->getClass_name_code());
			break;
		}
	}
	for (auto t : ClassTrainees) {
		t.removeWorkoutPlan(*wp);
	}
}

