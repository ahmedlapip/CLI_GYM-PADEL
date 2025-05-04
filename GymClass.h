#pragma once
#include <iostream>
#include <list>
#include <queue>
using namespace std;

#include "Trainee.h"
#include "WorkoutPlan.h"

class GymClass
{
    string name;
    int capacity;
    float startTime;
    float endTime;
    float timePeriod;
    int numberOfSessions;
	bool type; // 1 private, 0 group
    //Coach ClassCoach;
    list<WorkoutPlan> ClassWorkoutPlans;
    list<Trainee> ClassTrainees;
    queue<Trainee> ClassWaitingList;

	public:
	GymClass();
	GymClass(string name, int capacity, float startTime, float endTime, float timePeriod, int numberOfSessions, bool type);
	~GymClass();

	void setName(string name);
	void setCapacity(int capacity);
	void setStartTime(float startTime);
	void setEndTime(float endTime);
	void setTimePeriod(float timePeriod);
	void setNumberOfSessions(int numberOfSessions);
	void setType(bool type);

	string getName();
	int getCapacity();
	float getStartTime();
	float getEndTime();
	float getTimePeriod();
	int getNumberOfSessions();
	bool getType();

	void addTraineeToClass(Trainee t);
	void removeTraineeFromClass(Trainee t);

	void addWorkoutPlan(WorkoutPlan wp);
	void removeWorkoutPlan(WorkoutPlan wp);

	void displayClassInfo();
	void displayWorkoutPlans();
	void displayTraineesInClass();

};

