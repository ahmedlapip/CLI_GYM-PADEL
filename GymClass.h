#pragma once
#include <iostream>
#include <list>
#include <queue>
using namespace std;

#include "Trainee.h"
#include "WorkoutPlan.h"
#include"Coatch1.h"
class GymClass
{
    string name_code;
    int capacity;
    float startTime;
    float endTime;
    float timePeriod;
    int numberOfSessions;
	bool type;
	int coachID;
	 // 1 private, 0 group
    //Coatch1 ClassCoach;
    list<WorkoutPlan> ClassWorkoutPlans;
    list<Trainee> ClassTrainees;
    queue<Trainee> ClassWaitingList;

	public:
	GymClass();// name_code , Capacity, Start Time, End Time, Period,Number of Sessions ->month
	GymClass(string name_code, int capacity, float startTime, float endTime, float timePeriod, int numberOfSessions, bool type, int coachID);
	GymClass(string name_code, float startTime, string duration);
	~GymClass();

	void setname_code(string name_code);
	void setCapacity(int capacity);
	void setStartTime(float startTime);
	void setEndTime(float endTime);
	void setTimePeriod(float timePeriod);
	void setNumberOfSessions(int numberOfSessions);
	void setType(bool type);
	void setCoachID(int coachID);

	string getname_code();
	int getCapacity();
	float getStartTime();
	float getEndTime();
	float getTimePeriod();
	int getNumberOfSessions();
	bool getType();
	int getCoachID();

	void addTraineeToClass(Trainee t);
	void removeTraineeFromClass(Trainee t);

	void addWorkoutPlan(WorkoutPlan wp);
	void removeWorkoutPlan(string wpname);

	void displayClassInfo();
	void displayWorkoutPlans();
	void displayTraineesInClass();

};

