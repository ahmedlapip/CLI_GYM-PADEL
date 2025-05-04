//#pragma once
//#include <iostream>
//#include "LinkedList.h"
//#include "workoutplan.h"
//#include "coach.h"
//#include "ArrQueue.h"
//using namespace std;
//
//class gymclass {
//private:
//    string Name;
//    int Capacity;
//    float Starttime;
//    float Endtime;
//    float TimePeriod;
//    int NumberOfSessions;
//    string HallCode;
//    bool Private;
//    Coach ClassCoach;
//    LinkedList<WorkoutPlan> Classworkoutplans;
//   // LinkedList<Trainee> ClassTrainees;
//   // ArrQueue<Trainee> ClassWaitingList;
//
//public:
//    gymclass() 
//    {
//        Name = "UnKnown";
//        Capacity = 10;
//        Starttime = 1;
//        Endtime = 2;
//        TimePeriod = Endtime-Starttime;
//        NumberOfSessions = 2;
//        HallCode = "100";
//        Private = false;
//    }
//    gymclass(int cap, string name, float st,float et, int nos, bool pv,string hcode) {
//        Capacity = cap;
//        Name = name;
//        Starttime = st;
//        Endtime = et;
//        TimePeriod = et-st;
//        NumberOfSessions = nos;
//        HallCode = hcode;
//        Private = pv;
//    }
//    ~gymclass() {}
//    void setCapacity(int cap) { Capacity = cap; }
//    void setName(string name) { Name = name; }
//    void setstarttime(float st) { Starttime = st; }
//    void setendtime(float et) { Endtime = et; }
//    void setTimePeriod(float tp) { TimePeriod = tp; }
//    void setNumberOfSessions(int nos) { NumberOfSessions = nos; }
//    void setPrivacy(bool p) { Private = p; }
//    void setHallcode(string hcode) { HallCode = hcode; }
//    void setclasscoach(Coach& c) { ClassCoach = c; }
//    int getCapacity() { return Capacity; }
//    string getName() { return Name; }
//    float getstarttime() { return Starttime; }
//    float getendtime() { return Endtime; }
//    float getTimePeriod() { return TimePeriod; }
//    int getNumberOfSessions() { return NumberOfSessions; }
//    string gethallcode() { return HallCode; }
//    bool getPrivacy() { return Private; }
//    Coach getclasscoach() { return ClassCoach; }
//   // void setClassTrainees(const LinkedList<Trainee>& trainees) {    ClassTrainees = trainees;   }
//   // LinkedList<Trainee>& getclasstrainees() { return ClassTrainees; }
//   // void setClassWaitingList(const ArrQueue<Trainee>& waitingList) { ClassWaitingList = waitingList; }
//   // ArrQueue<Trainee>& getclasswl() { return ClassWaitingList; }
//    LinkedList<WorkoutPlan>& getclasswops() { return Classworkoutplans; }
//
//    void addworkoutplan() {
//
//        WorkoutPlan w;
//        string n, intensity, type, coachname;
//        float hpd, lc;
//
//        cout << "\nEnter workout plan name : ";
//        cin >> n;
//        w.setname(n);
//
//        cout << "Enter hours per day : ";
//        cin >> hpd;
//        w.sethpd(hpd);
//
//        cout << "Enter intensity (Low, Medium, High) : ";
//        cin >> intensity;
//        w.setintensity(intensity);
//
//        cout << "Enter workout type : ";
//        cin >> type;
//        w.settype(type);
//
//        cout << "Enter estimated lost calories : ";
//        cin >> lc;
//        w.setlc(lc);
//
//        Classworkoutplans.Append(w);
//        cout << "Workout plan has been added successfully!\n";
//    }
//
//    void deleteworkoutplan() {
//        string name;
//        int count = 0;
//        bool found = false;
//
//        cout << "Enter the workout plan name you want to delete : ";
//        cin >> name;
//
//        for (Node<WorkoutPlan>* wp = Classworkoutplans.head; wp != nullptr; wp = wp->next) {
//            if (wp->data.getname() == name) {
//                Classworkoutplans.DeleteAt(count);
//                found = true;
//                break;
//            }
//            count++;
//        }
//
//        if (found)
//            cout << "WorkoutPlan has been deleted successfully!\n";
//        else
//            cout << "WorkoutPlan has not been found!\n";
//    }
//
//    void deleteallwops() {
//        while (Classworkoutplans.size > 0) {
//            Classworkoutplans.DeleteAt(0);
//        }
//		cout << "All workout plans have been deleted successfully!\n";
//        
//    }
//
//    void displaywop() {
//        string n;
//        bool found = false;
//        cout << "Enter the name of the workout plan you want to display : ";
//        cin >> n;
//
//        for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {
//            if (w1->data.getname() == n) {
//                cout << "Workout Plan Name: " << w1->data.getname() << endl;
//                cout << "Type: " << w1->data.gettype() << endl;
//                cout << "Hours per Day: " << w1->data.gethpd() << endl;
//                cout << "Intensity: " << w1->data.getintensity() << endl;
//                cout << "Lost Calories: " << w1->data.getlc() << endl;
//                found = true;
//                break;
//            }
//        }
//
//        if (!found)
//            cout << "Workout plan not found!\n";
//    }
//
//    void displaywops() {
//        if (Classworkoutplans.size == 0) {
//            cout << "Class has no workout plans yet!\n";
//            return;
//        }
//
//        for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {
//            cout << "Workout Plan Name: " << w1->data.getname() << endl;
//            cout << "Type: " << w1->data.gettype() << endl;
//            cout << "Hours per Day: " << w1->data.gethpd() << endl;
//            cout << "Intensity: " << w1->data.getintensity() << endl;
//            cout << "Lost Calories: " << w1->data.getlc() << endl;
//            cout << "-------------------------\n";
//        }
//    }
//
//	void updatewop() {
//		string name;
//		bool found = false;
//        if (Classworkoutplans.size == 0)
//        {
//            cout << "Class has no workout plans yet!\n";
//            return;
//        }
//		cout << "Enter the name of the workout plan you want to update : ";
//		cin >> name;
//		
//		for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {
//			if (w1->data.getname() == name) {
//				string n, intensity, type;
//				float hpd, lc;
//				bool again = false;
//                do
//                {
//                    cout << "what do you want to update ?\n";
//                    cout << "1- Name\n";
//                    cout << "2- Hours per day\n";
//                    cout << "3- Intensity\n";
//                    cout << "4- Type\n";
//                    cout << "5- Estimated lost calories\n";
//                    cout << "6- Exit\n";
//                    int choice;
//                    cin >> choice;
//                    switch (choice)
//                    {
//                    case 1:
//                        cout << "Enter new name: ";
//                        cin >> n;
//                        w1->data.setname(n);
//                        break;
//                    case 2:
//                        cout << "Enter new hours per day: ";
//                        cin >> hpd;
//                        w1->data.sethpd(hpd);
//                        break;
//                    case 3:
//                        cout << "Enter new intensity (Low, Medium, High): ";
//                        cin >> intensity;
//                        w1->data.setintensity(intensity);
//                        break;
//                    case 4:
//                        cout << "Enter new type: ";
//                        cin >> type;
//                        w1->data.settype(type);
//                        break;
//                    case 5:
//                        cout << "Enter new estimated lost calories: ";
//                        cin >> lc;
//                        w1->data.setlc(lc);
//                        break;
//                    case 6:
//                        cout << "Exiting update...\n";
//                        return;
//                    default:
//                        cout << "Invalid choice! Please try again.\n";
//                        break;
//
//                    }
//                    cout << "Do you want to update another field? (y/n): ";
//                    char againChoice;
//                    cin >> againChoice;
//                    if (againChoice == 'y' || againChoice == 'Y') {
//                        again = true;
//                    }
//                    else {
//                        again = false;
//                    }
//
//                } while (again);
//				cout << "Workout plan has been updated successfully!\n";
//
//				found = true;
//				break;
//			}
//		}
//
//		if (found)
//			cout << "Workout plan has been updated successfully!\n";
//		else
//			cout << "Workout plan not found!\n";
//	}
//
//    //trainee functions
//    /*
//        void addtrainee(Trainee& t)
//    {
//        if (getCapacity()==ClassTrainees.size)
//        {
//            ClassWaitingList.Enqueue(t);
//            cout << "Class is full! The trainee will be added to the waiting list." << endl;
//        }
//        else
//        {
//			ClassTrainees.Append(t);
//			cout << "Trainee has been added to the class successfully!" << endl;
//        }
//    }
//    void removetrainee(Trainee& t)
//    {
//        int count = 0;
//        bool found = false;
//        for (Node<Trainee>* t1 = ClassTrainees.head; t1 != NULL; t1 = t1->next)
//        {
//            if (t1->data.getName() == t.getname())
//            {
//                ClassTrainees.DeleteAt(count);
//                ClassTrainees.Append(ClassWaitingList.Front());
//                ClassWaitingList.Dequeue();
//				cout << "Trainee has been removed successfully ! " << endl;
//                found = true;
//                break;
//            }
//            count++;
    /*  
    //#pragma once  
    //#include <iostream>  
    //#include "LinkedList.h"  
    //#include "workoutplan.h"  
    //#include "coach.h"  
    //#include "ArrQueue.h"  
    //using namespace std;  
    //  
    //class gymclass {  
    //private:  
    //    string Name;  
    //    int Capacity;  
    //    float Starttime;  
    //    float Endtime;  
    //    float TimePeriod;  
    //    int NumberOfSessions;  
    //    string HallCode;  
    //    bool Private;  
    //    Coach ClassCoach;  
    //    LinkedList<WorkoutPlan> Classworkoutplans;  
    //   // LinkedList<Trainee> ClassTrainees;  
    //   // ArrQueue<Trainee> ClassWaitingList;  
    //  
    //public:  
    //    gymclass()   
    //    {  
    //        Name = "UnKnown";  
    //        Capacity = 10;  
    //        Starttime = 1;  
    //        Endtime = 2;  
    //        TimePeriod = Endtime-Starttime;  
    //        NumberOfSessions = 2;  
    //        HallCode = "100";  
    //        Private = false;  
    //    }  
    //    gymclass(int cap, string name, float st,float et, int nos, bool pv,string hcode) {  
    //        Capacity = cap;  
    //        Name = name;  
    //        Starttime = st;  
    //        Endtime = et;  
    //        TimePeriod = et-st;  
    //        NumberOfSessions = nos;  
    //        HallCode = hcode;  
    //        Private = pv;  
    //    }  
    //    ~gymclass() {}  
    //    void setCapacity(int cap) { Capacity = cap; }  
    //    void setName(string name) { Name = name; }  
    //    void setstarttime(float st) { Starttime = st; }  
    //    void setendtime(float et) { Endtime = et; }  
    //    void setTimePeriod(float tp) { TimePeriod = tp; }  
    //    void setNumberOfSessions(int nos) { NumberOfSessions = nos; }  
    //    void setPrivacy(bool p) { Private = p; }  
    //    void setHallcode(string hcode) { HallCode = hcode; }  
    //    void setclasscoach(Coach& c) { ClassCoach = c; }  
    //    int getCapacity() { return Capacity; }  
    //    string getName() { return Name; }  
    //    float getstarttime() { return Starttime; }  
    //    float getendtime() { return Endtime; }  
    //    float getTimePeriod() { return TimePeriod; }  
    //    int getNumberOfSessions() { return NumberOfSessions; }  
    //    string gethallcode() { return HallCode; }  
    //    bool getPrivacy() { return Private; }  
    //    Coach getclasscoach() { return ClassCoach; }  
    //   // void setClassTrainees(const LinkedList<Trainee>& trainees) {    ClassTrainees = trainees;   }  
    //   // LinkedList<Trainee>& getclasstrainees() { return ClassTrainees; }  
    //   // void setClassWaitingList(const ArrQueue<Trainee>& waitingList) { ClassWaitingList = waitingList; }  
    //   // ArrQueue<Trainee>& getclasswl() { return ClassWaitingList; }  
    //    LinkedList<WorkoutPlan>& getclasswops() { return Classworkoutplans; }  
    //  
    //    void addworkoutplan() {  
    //  
    //        WorkoutPlan w;  
    //        string n, intensity, type, coachname;  
    //        float hpd, lc;  
    //  
    //        cout << "\nEnter workout plan name : ";  
    //        cin >> n;  
    //        w.setname(n);  
    //  
    //        cout << "Enter hours per day : ";  
    //        cin >> hpd;  
    //        w.sethpd(hpd);  
    //  
    //        cout << "Enter intensity (Low, Medium, High) : ";  
    //        cin >> intensity;  
    //        w.setintensity(intensity);  
    //  
    //        cout << "Enter workout type : ";  
    //        cin >> type;  
    //        w.settype(type);  
    //  
    //        cout << "Enter estimated lost calories : ";  
    //        cin >> lc;  
    //        w.setlc(lc);  
    //  
    //        Classworkoutplans.Append(w);  
    //        cout << "Workout plan has been added successfully!\n";  
    //    }  
    //  
    //    void deleteworkoutplan() {  
    //        string name;  
    //        int count = 0;  
    //        bool found = false;  
    //  
    //        cout << "Enter the workout plan name you want to delete : ";  
    //        cin >> name;  
    //  
    //        for (Node<WorkoutPlan>* wp = Classworkoutplans.head; wp != nullptr; wp = wp->next) {  
    //            if (wp->data.getname() == name) {  
    //                Classworkoutplans.DeleteAt(count);  
    //                found = true;  
    //                break;  
    //            }  
    //            count++;  
    //        }  
    //  
    //        if (found)  
    //            cout << "WorkoutPlan has been deleted successfully!\n";  
    //        else  
    //            cout << "WorkoutPlan has not been found!\n";  
    //    }  
    //  
    //    void deleteallwops() {  
    //        while (Classworkoutplans.size > 0) {  
    //            Classworkoutplans.DeleteAt(0);  
    //        }  
    //		cout << "All workout plans have been deleted successfully!\n";  
    //          
    //    }  
    //  
    //    void displaywop() {  
    //        string n;  
    //        bool found = false;  
    //        cout << "Enter the name of the workout plan you want to display : ";  
    //        cin >> n;  
    //  
    //        for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {  
    //            if (w1->data.getname() == n) {  
    //                cout << "Workout Plan Name: " << w1->data.getname() << endl;  
    //                cout << "Type: " << w1->data.gettype() << endl;  
    //                cout << "Hours per Day: " << w1->data.gethpd() << endl;  
    //                cout << "Intensity: " << w1->data.getintensity() << endl;  
    //                cout << "Lost Calories: " << w1->data.getlc() << endl;  
    //                found = true;  
    //                break;  
    //            }  
    //        }  
    //  
    //        if (!found)  
    //            cout << "Workout plan not found!\n";  
    //    }  
    //  
    //    void displaywops() {  
    //        if (Classworkoutplans.size == 0) {  
    //            cout << "Class has no workout plans yet!\n";  
    //            return;  
    //        }  
    //  
    //        for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {  
    //            cout << "Workout Plan Name: " << w1->data.getname() << endl;  
    //            cout << "Type: " << w1->data.gettype() << endl;  
    //            cout << "Hours per Day: " << w1->data.gethpd() << endl;  
    //            cout << "Intensity: " << w1->data.getintensity() << endl;  
    //            cout << "Lost Calories: " << w1->data.getlc() << endl;  
    //            cout << "-------------------------\n";  
    //        }  
    //    }  
    //  
    //	void updatewop() {  
    //		string name;  
    //		bool found = false;  
    //        if (Classworkoutplans.size == 0)  
    //        {  
    //            cout << "Class has no workout plans yet!\n";  
    //            return;  
    //        }  
    //		cout << "Enter the name of the workout plan you want to update : ";  
    //		cin >> name;  
    //		  
    //		for (Node<WorkoutPlan>* w1 = Classworkoutplans.head; w1 != nullptr; w1 = w1->next) {  
    //			if (w1->data.getname() == name) {  
    //				string n, intensity, type;  
    //				float hpd, lc;  
    //				bool again = false;  
    //                do  
    //                {  
    //                    cout << "what do you want to update ?\n";  
    //                    cout << "1- Name\n";  
    //                    cout << "2- Hours per day\n";  
    //                    cout << "3- Intensity\n";  
    //                    cout << "4- Type\n";  
    //                    cout << "5- Estimated lost calories\n";  
    //                    cout << "6- Exit\n";  
    //                    int choice;  
    //                    cin >> choice;  
    //                    switch (choice)  
    //                    {  
    //                    case 1:  
    //                        cout << "Enter new name: ";  
    //                        cin >> n;  
    //                        w1->data.setname(n);  
    //                        break;  
    //                    case 2:  
    //                        cout << "Enter new hours per day: ";  
    //                        cin >> hpd;  
    //                        w1->data.sethpd(hpd);  
    //                        break;  
    //                    case 3:  
    //                        cout << "Enter new intensity (Low, Medium, High): ";  
    //                        cin >> intensity;  
    //                        w1->data.setintensity(intensity);  
    //                        break;  
    //                    case 4:  
    //                        cout << "Enter new type: ";  
    //                        cin >> type;  
    //                        w1->data.settype(type);  
    //                        break;  
    //                    case 5:  
    //                        cout << "Enter new estimated lost calories: ";  
    //                        cin >> lc;  
    //                        w1->data.setlc(lc);  
    //                        break;  
    //                    case 6:  
    //                        cout << "Exiting update...\n";  
    //                        return;  
    //                    default:  
    //                        cout << "Invalid choice! Please try again.\n";  
    //                        break;  
    //  
    //                    }  
    //                    cout << "Do you want to update another field? (y/n): ";  
    //                    char againChoice;  
    //                    cin >> againChoice;  
    //                    if (againChoice == 'y' || againChoice == 'Y') {  
    //                        again = true;  
    //                    }  
    //                    else {  
    //                        again = false;  
    //                    }  
    //  
    //                } while (again);  
    //				cout << "Workout plan has been updated successfully!\n";  
    //  
    //				found = true;  
    //				break;  
    //			}  
    //		}  
    //  
    //		if (found)  
    //			cout << "Workout plan has been updated successfully!\n";  
    //		else  
    //			cout << "Workout plan not found!\n";  
    //	}  
    //  
    //    //trainee functions  
    //    /*  
    //        void addtrainee(Trainee& t)  
    //    {  
    //        if (getCapacity()==ClassTrainees.size)  
    //        {  
    //            ClassWaitingList.Enqueue(t);  
    //            cout << "Class is full! The trainee will be added to the waiting list." << endl;  
    //        }  
    //        else  
    //        {  
    //			ClassTrainees.Append(t);  
    //			cout << "Trainee has been added to the class successfully!" << endl;  
    //        }  
    //    }  
    //    void removetrainee(Trainee& t)  
    //    {  
    //        int count = 0;  
    //        bool found = false;  
    //        for (Node<Trainee>* t1 = ClassTrainees.head; t1 != NULL; t1 = t1->next)  
    //        {  
    //            if (t1->data.getName() == t.getname())  
    //            {  
    //                ClassTrainees.DeleteAt(count);  
    //                ClassTrainees.Append(ClassWaitingList.Front());  
    //                ClassWaitingList.Dequeue();  
    //				cout << "Trainee has been removed successfully ! " << endl;  
    //                found = true;  
    //                break;  
    //            }  
    //            count++;  
    //        }  
    //  
    //        if (!found)  
    //            cout << "Class not found ! " << endl;  
    //    }  
    //    void displayclasstrainees()  
    //    {  
    //        bool empty = true;  
    //        for (Node<Trainee>* t = ClassTrainees.head; t != NULL; t = t->next)  
    //        {  
    //            empty = false;  
    //            cout << "------------------------------------------" << endl;  
    //            cout << "Trainee name : " << t->data.getname() << endl;  
    //            cout << "Trainee id : " << t->data.getid() << endl;  
    //            cout << "------------------------------------------" << endl;  
    //        }  
    //        if (empty)  
    //            cout << "The class has no trainees yet ! " << endl;  
    //    }  
    //    */  
    //  
    //};  
    */
//        }
//
//        if (!found)
//            cout << "Class not found ! " << endl;
//    }
//    void displayclasstrainees()
//    {
//        bool empty = true;
//        for (Node<Trainee>* t = ClassTrainees.head; t != NULL; t = t->next)
//        {
//            empty = false;
//            cout << "------------------------------------------" << endl;
//            cout << "Trainee name : " << t->data.getname() << endl;
//            cout << "Trainee id : " << t->data.getid() << endl;
//            cout << "------------------------------------------" << endl;
//        }
//        if (empty)
//            cout << "The class has no trainees yet ! " << endl;
//    }
//    */
//
//};