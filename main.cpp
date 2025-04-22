#include "Data_Base.h"  
#include <iostream>  
using namespace std;  

int main() {  
  Data_Base* db = Data_Base::GetDB();  
  cout << "Database initialized successfully!" << endl;  
  db->getGym_Padel_DB("Gym_Padel_DB.xlsx");  
  db->GetUser("User");
  db->GetManager("Manager");
  db->GetTrainee("Trainee");
  db->GetCoach("Coach");
  db->GetClass("Class");
  db->GetHallSystem("HallSystem");
  db->GetWorkoutPlan("WorkoutPlan");
  db->GetReceptionist("Receptionist");
  


  cout << "Database initialized successfully!" << endl;  
  db->SaveGym_Padel_DB("Gym_Padel_DB.xlsx");
  return 0;  
}