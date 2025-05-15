#pragma once
#include <iostream>
using namespace std;
class WorkoutPlan
{
	string name_code;
	float HoursPerDay;
	string Type;
	string Intensity;
	float LostCalories;
	string Class_name_code;
public:
	WorkoutPlan();
	WorkoutPlan(string name_code, float hoursPerDay, string type, string intensity, float lostCalories, string Class_name_code);
	~WorkoutPlan();

	void setname_code(string name_code);
	void setHoursPerDay(float hoursPerDay);
	void setType(string type);
	void setIntensity(string intensity);
	void setLostCalories(float lostCalories);
	void setClass_name_code(string Class_name_code);

	string getname_code();
	float getHoursPerDay();
	string getType();
	string getIntensity();
	float getLostCalories();
	string getClass_name_code();
};

