#include "GymClass.h"
#include <string>

GymClass::GymClass() = default;
GymClass::GymClass(string name, int capacity, float startTime, float endTime, float timePeriod, int numberOfSessions) {
	this->name = name;
	this->capacity = capacity;
	this->startTime = startTime;
	this->endTime = endTime;
	this->timePeriod = timePeriod;
	this->numberOfSessions = numberOfSessions;
	
}
GymClass::GymClass(string name, float startTime, string duration) {
	this->name = name;
	this->startTime = startTime;
	this->timePeriod = stof(duration);
	this->capacity = 0;
	this->endTime = 0;
	this->numberOfSessions = 0;
}
GymClass::~GymClass() {
	this->name.clear();
	this->capacity = 0;
	this->startTime = 0;
	this->endTime = 0;
	this->timePeriod = 0;
	this->numberOfSessions = 0;
	
}
void GymClass::setName(string name) { this->name = name; }
void GymClass::setCapacity(int capacity) { this->capacity = capacity; }
void GymClass::setStartTime(float startTime) { this->startTime = startTime; }
void GymClass::setEndTime(float endTime) { this->endTime = endTime; }
void GymClass::setTimePeriod(float timePeriod) { this->timePeriod = timePeriod; }
void GymClass::setNumberOfSessions(int numberOfSessions) { this->numberOfSessions = numberOfSessions; }

string GymClass::getName() { return name; }
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
void GymClass::removeWorkoutPlan(WorkoutPlan wp) {
	for (auto it = ClassWorkoutPlans.begin(); it != ClassWorkoutPlans.end(); ++it) {
		if (it->getName() == wp.getName()) {
			ClassWorkoutPlans.erase(it);
			break;
		}
	}
	for (auto t : ClassTrainees) {
		t.removeWorkoutPlan(wp);
	}
}

void GymClass::displayClassInfo() {
	cout << "Class Name: " << name << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Start Time: " << startTime << endl;
	cout << "End Time: " << endTime << endl;
	cout << "Time Period: " << timePeriod << endl;
	cout << "Number of Sessions: " << numberOfSessions << endl;
	cout << "Type: " << (type ? "Private" : "Group") << endl;
}
void GymClass::displayWorkoutPlans() {
	for (auto wp : ClassWorkoutPlans) {
		cout << "Workout Plan Name: " << wp.getName() << endl;
		cout << "Hours Per Day: " << wp.getHoursPerDay() << endl;
		cout << "Type: " << wp.getType() << endl;
		cout << "Intensity: " << wp.getIntensity() << endl;
		cout << "Lost Calories: " << wp.getLostCalories() << endl;
	}
}
void GymClass::displayTraineesInClass() {
	for (auto t : ClassTrainees) {
		cout << "Trainee Name: " << t.getName() << endl;
		cout << "Trainee ID: " << t.getId() << endl;
	}
}

