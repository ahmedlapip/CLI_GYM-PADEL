#include "WorkoutPlan.h"

WorkoutPlan::WorkoutPlan() = default;
WorkoutPlan::WorkoutPlan(string name_code, float hoursPerDay, string type, string intensity, float lostCalories, string Class_name_code) {
	this->name_code = name_code;
	this->HoursPerDay = hoursPerDay;
	this->Type = type;
	this->Intensity = intensity;
	this->LostCalories = lostCalories;
	this->Class_name_code = Class_name_code;
}
WorkoutPlan::~WorkoutPlan() {
	this->name_code.clear();
	this->HoursPerDay = 0;
	this->Type.clear();
	this->Intensity.clear();
	this->LostCalories = 0;
	this->Class_name_code.clear();
}

void WorkoutPlan::setname_code(string name_code) { this->name_code = name_code; }
void WorkoutPlan::setHoursPerDay(float hoursPerDay) { this->HoursPerDay = hoursPerDay; }
void WorkoutPlan::setType(string type) { this->Type = type; }
void WorkoutPlan::setIntensity(string intensity) { this->Intensity = intensity; }
void WorkoutPlan::setLostCalories(float lostCalories) { this->LostCalories = lostCalories; }
void WorkoutPlan::setClass_name_code(string Class_name_code) { this->Class_name_code = Class_name_code; }

string WorkoutPlan::getname_code() { return name_code; }
float WorkoutPlan::getHoursPerDay() { return HoursPerDay; }
string WorkoutPlan::getType() { return Type; }
string WorkoutPlan::getIntensity() { return Intensity; }
float WorkoutPlan::getLostCalories() { return LostCalories; }
string WorkoutPlan::getClass_name_code() { return Class_name_code; }