#pragma once
#include <xlnt/xlnt.hpp>
#include <string>
#include <mutex>
#include <fstream>

///singleton Class 
class Data_Base
{
	//Fields
private:
	xlnt::workbook Gym_Padel_DB;
	xlnt::worksheet	User;
	xlnt::worksheet Manager;
	xlnt::worksheet Trainee;
	xlnt::worksheet HallSystem;
	xlnt::worksheet Class;
	xlnt::worksheet StaffMember;
	xlnt::worksheet Coach;
	xlnt::worksheet Receptionist;
	xlnt::worksheet Subscription;
	xlnt::worksheet WorkoutPlan;
	xlnt::worksheet TraineeAssignedToClass;
	xlnt::worksheet CoachTrainingClasses;
	xlnt::worksheet HallHoldsClasses;
	xlnt::worksheet workoutPlanAssignedToClass;
	xlnt::worksheet Manages;
	xlnt::worksheet WorksIn;
	static Data_Base* InstanceDB;
	static std::mutex mtx;
	Data_Base();
public:
	Data_Base(Data_Base& t) = delete;
	static Data_Base* GetDB();
	std::ofstream fileee;

	xlnt::workbook getGym_Padel_DB(std::string FileName) {
		try
		{
			this->Gym_Padel_DB.load(FileName);
		}
		catch (const std::exception&)
		{
			std::cout << "File Not Exist\n";
		}

		return this->Gym_Padel_DB;
	}
	//**********************************************\\
	
   void SaveGym_Padel_DB(std::string FileName) {
	try
	{
		this->Gym_Padel_DB.save(FileName);
	}
	catch (const std::exception&)
	{
		std::cout << "File Not Exist\n";
	}
	}

	xlnt::worksheet GetUser(std::string FileName) {
		try
		{
			this->User = this->Gym_Padel_DB.sheet_by_index(0);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->User = this->Gym_Padel_DB.sheet_by_index(0);
			this->User.cell("A1").value("ID");
			this->User.cell("B1").value("Name");
			this->User.cell("C1").value("Email");
			this->User.cell("D1").value("Phone Number");
			this->User.cell("E1").value("Password");
			this->User.cell("F1").value("Date Of Birth");
			this->User.cell("G1").value("Gender");
			this->User.cell("H1").value("Gym Or Padel");
			this->User.cell("H1").value("Assigned");	
		}
		return this->User;
	}

	//************************************************\\
}


	xlnt::worksheet GetManager(std::string FileName) {
		try
		{
			this->Manager = this->Gym_Padel_DB.sheet_by_index(1);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->Manager = this->Gym_Padel_DB.sheet_by_index(1);
			this->Manager.cell("A1").value("ID");

		}
		return this->Manager;
	}




	//************************************************\\
	

	xlnt::worksheet GetTrainee(std::string FileName) {
		try
		{
			this->Trainee = this->Gym_Padel_DB.sheet_by_index(2);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->Trainee = this->Gym_Padel_DB.sheet_by_index(2);
			this->Trainee.cell("A1").value("ID");
			this->Trainee.cell("B1").value("Weight");
			this->Trainee.cell("C1").value("Height");
			this->Trainee.cell("D1").value("Lost Calories Per Minute");
		}
	
		return this->Trainee;
	}

	//************************************************\\
	

	

	xlnt::worksheet GetCoach(std::string FileName) {
		try
		{
			this->Coach = this->Gym_Padel_DB.sheet_by_index(3);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->Coach = this->Gym_Padel_DB.sheet_by_index(3);
			this->Coach.cell("A1").value("ID");
			this->Coach.cell("B1").value("Weight");
			this->Coach.cell("C1").value("Height");
			this->Coach.cell("D1").value("Years Of Experience");
		}
		return this->Coach;
	}


	//************************************************\\



	xlnt::worksheet GetClass(std::string FileName) {
		try
		{
			this->Class = this->Gym_Padel_DB.sheet_by_index(4);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->Class = this->Gym_Padel_DB.sheet_by_index(4);
			this->Class.cell("A1").value("Class Code");
			this->Class.cell("B1").value("Gym Or Padel");
			this->Class.cell("C1").value("Training Days");
			this->Class.cell("D1").value("Start Time");
			this->Class.cell("E1").value("End Time");
			this->Class.cell("G1").value("Max Number Of Trainees");
		}
		return this->Class;
	}
	//************************************************\\
	


	xlnt::worksheet GetHallSystem(std::string FileName) {
		try
		{
			this->HallSystem = this->Gym_Padel_DB.sheet_by_index(5);
			
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->HallSystem = this->Gym_Padel_DB.sheet_by_index(5);
			this->HallSystem.cell("A1").value("Hall Code");
			this->HallSystem.cell("B1").value("Gym Or Padel");
			this->HallSystem.cell("C1").value("Hall Capacity");
			this->HallSystem.cell("D1").value("Working Days");
			this->HallSystem.cell("E1").value("Start Time");
			this->HallSystem.cell("F1").value("End Time");
		}
		return this->HallSystem;
	}

	//************************************************\\



	xlnt::worksheet GetWorkoutPlan(std::string FileName) {
		try
		{
			this->WorkoutPlan = this->Gym_Padel_DB.sheet_by_index(6);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->WorkoutPlan = this->Gym_Padel_DB.sheet_by_index(6);
			this->WorkoutPlan.cell("A1").value("Workout Plan Code");
			this->WorkoutPlan.cell("B1").value("Intensity");
			this->WorkoutPlan.cell("C1").value("Duration");
		}
		return this->HallSystem;
	}


	//************************************************\\
	

	xlnt::worksheet GetReceptionist(std::string FileName) {
		try
		{
			this->Receptionist = this->Gym_Padel_DB.sheet_by_index(7);
			}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
			this->Receptionist = this->Gym_Padel_DB.sheet_by_index(7);
			this->Receptionist.cell("A1").value("ID");
            this->Receptionist.cell("A1").style().fill().solid(xlnt::color::black());
			
		}
		return this->Receptionist;
	}
	//************************************************\\
	
	void SetSubscription(std::string FileName) {
		try
		{
			this->Subscription = this->Gym_Padel_DB.sheet_by_index(8);
			this->Subscription.title(FileName);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
		}
	}

	xlnt::worksheet GetSubscription() {
		return this->Subscription;
	}

	//************************************************\\
	
	//void SetWorkoutPlan(std::string FileName) {
	//	try
	//	{
	//		this->WorkoutPlan = this->Gym_Padel_DB.sheet_by_index(9);
	//		this->WorkoutPlan.title(FileName);
	//	}
	//	catch (const std::exception&)
	//	{
	//		this->Gym_Padel_DB.create_sheet().title(FileName);
	//	}
	//}

	//xlnt::worksheet GetWorkoutPlanPerOrder() {
	//	return this->WorkoutPlan;
	//}

	//************************************************\\
	
	void SetOrder(std::string FileName) {
		try
		{
			this->Manages = this->Gym_Padel_DB.sheet_by_index(10);
			this->Manages.title(FileName);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
		}
	}

	xlnt::worksheet GetOrder() {
		return this->Manages;
	}
	//************************************************\\

	void SetWorksIn(std::string FileName) {
		try
		{
			this->WorksIn = this->Gym_Padel_DB.sheet_by_index(11);
			this->WorksIn.title(FileName);
		}
		catch (const std::exception&)
		{
			this->Gym_Padel_DB.create_sheet().title(FileName);
		}
	}

	xlnt::worksheet GetWorksIn() {
		return this->WorksIn;
	}


};