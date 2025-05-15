#pragma once  
#include <iostream>  
#include "Subscription.h"
#include "Coatch1.h"  
#include "WorkoutPlan.h"  
#include "Trainee.h"  
#include <unordered_map> 
#include <string>  
#include "Hall.h"  
#include "Court.h"
#include "GymClass.h"
#include "Manager.h"
#include "Receptionist1.h"
#include "Booking.h"
#include"Data_Base.h"
#include <xlnt/xlnt.hpp>
using namespace std;  
class System  
{  
	Data_Base* db = Data_Base::GetDB();
	xlnt::workbook GymWB = db->getGym_Padel_DB("Gym_Padel_DB.xlsx");
	xlnt::worksheet ManagerWS = db->GetManager("Manager");
	xlnt::worksheet TraineeWS = db->GetTrainee("Trainee");
	xlnt::worksheet CoatchWS = db->GetCoach("Coatch");
	xlnt::worksheet ClassWS = db->GetGymClass("GymClass");
	xlnt::worksheet HallSystemWS = db->GetHallSystem("HallSystem");
	xlnt::worksheet WorkoutPlanWS = db->GetWorkoutPlan("WorkoutPlan");
	xlnt::worksheet ReceptionistWS = db->GetReceptionist("Receptionist");
	xlnt::worksheet CourtWS = db->GetCourt("Court");
	xlnt::worksheet BookingWS = db->GetBooking("Booking");
	xlnt::worksheet SubscriptionWS = db->GetSubscription("Subscription");


	/// Trainee
	unordered_map<int, Trainee> Load_Trainee(xlnt::worksheet& ws);
    void Save_Trainee(xlnt::worksheet& ws, unordered_map<int, Trainee> traineeList);
    /// Coatch
    unordered_map<int, Coatch1> Load_Coatch(xlnt::worksheet & ws);
    void Save_Coatch(xlnt::worksheet &ws, unordered_map<int, Coatch1> coatchList);
    /// Receptionist
	unordered_map<int, Receptionist> Load_Receptionist(xlnt::worksheet & ws);
    void Save_Receptionist(xlnt::worksheet &ws, unordered_map<int, Receptionist> receptionistList);
	/// Manager
	unordered_map<int, Manager> Load_Manager(xlnt::worksheet & ws);
    void Save_Manager(xlnt::worksheet &ws, unordered_map<int, Manager> managerList);
	/// Class
	unordered_map<int, GymClass> Load_GymClass(xlnt::worksheet & ws);
    void Save_GymClass(xlnt::worksheet &ws, unordered_map<int, GymClass> classList);
	/// Hall
	unordered_map<int, Hall> Load_Hall(xlnt::worksheet & ws);
    void Save_Hall(xlnt::worksheet &ws, unordered_map<int, Hall> hallList);
	/// workoutPlan
	unordered_map<int, WorkoutPlan> Load_WorkoutPlan(xlnt::worksheet & ws);
    void Save_WorkoutPlan(xlnt::worksheet &ws, unordered_map<int, WorkoutPlan> workoutPlanList);
	/// Court
	unordered_map<int, Court> Load_Court(xlnt::worksheet & ws);
	void Save_Court(xlnt::worksheet &ws, unordered_map<int, Court> CourtList);
	/// Booking
	unordered_map<int, Booking> Load_Booking(xlnt::worksheet & ws);
	void Save_Booking(xlnt::worksheet &ws, unordered_map<int, Booking> BookingList);
	/// Subscription
	unordered_map<int, Subscription> Load_Subscription(xlnt::worksheet & ws);
	void Save_Subscription(xlnt::worksheet &ws, unordered_map<int, Subscription> SubscriptionList);
    
public:
	unordered_map<int ,Trainee> traineeList;
	unordered_map<int,Coatch1> coatchList;
	unordered_map<int, Receptionist> receptionistList;
	unordered_map<int, Manager> managerList;
	unordered_map<int,GymClass> classList;
	unordered_map<int, Hall> hallList;
	unordered_map<int, WorkoutPlan> workoutPlanList;
	unordered_map<int, Court> CourtList;
	unordered_map<int, Booking> BookingList;
	unordered_map<int, Subscription> SubscriptionList;


	void Load_All_Data();
	void Save_All_Data();

};
