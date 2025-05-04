//#pragma once
//#include <iostream>
//#include "LinkedList.h"
//#include "ArrQueue.h"
//#include "coach.h"
//#include "workoutplan.h"
//#include "class.h"
//using namespace std;
//class Hall
//{
//private :
//	string Name;
//	string Code;
//	LinkedList<gymclass> HallClasses;
//public:
//	Hall()
//	{
//		Name = "Unknown";
//		Code = "000";
//	}
//	Hall(string name, string code)
//	{
//		Name = name;
//		Code = code;
//	}
//	Hall(const Hall& h)
//	{
//		Name = h.Name;
//		Code = h.Code;
//		HallClasses = h.HallClasses;
//	}
//	~Hall() {};
//	void setName(string name) { Name = name; }
//	void setCode(string code) { Code = code; }
//	string getName() { return Name; }
//	string getCode() { return Code; }
//	LinkedList<gymclass> getHallClasses() { return HallClasses; }
//	void addClass(gymclass c)
//    {
//		HallClasses.Append(c);
//	}
//	void removeClassfromhall(gymclass& c)
//	{
//		int index = 0;
//		bool found = false;
//		for (Node<gymclass>* current = HallClasses.head; current != nullptr; current = current->next, ++index)
//		{
//			if (current->data.getName() == c.getName())
//			{
//				HallClasses.DeleteAt(index);
//				found = true;
//				cout << "Class removed from the hall." << endl;
//				break;
//			}
//		}
//		if (!found)
//		{
//			cout << "Class not found in the hall." << endl;
//		}
//	}
//	void displayHallClasses()
//	{
//		cout << "Classes in Hall " << Name << ":" << endl;
//		for (Node<gymclass>* current = HallClasses.head; current != nullptr; current = current->next)
//		{
//			cout << "Class Name: " << current->data.getName() << endl;
//		}
//	}
//	void displayhallclass()
//	{
//		string name;
//		bool found = false;
//		cout << "Enter class name : ";
//		cin >> name;
//		for (Node<gymclass>* current = HallClasses.head; current != nullptr; current = current->next)
//		{
//			if (current->data.getName()==name)
//			{
//				found = true;
//				cout << "Class name : " << current->data.getName() << endl;	
//				cout << "Class capacity : " << current->data.getCapacity() << endl;
//				cout << "Class number of sessions : " << current->data.getNumberOfSessions() << endl;
//				cout << "Class time period : " << current->data.getTimePeriod() << endl;
//				cout << "Class start time : " << current->data.getstarttime() << endl;
//				cout << "Class end time : " << current->data.getendtime() << endl;
//				bool pv = current->data.getPrivacy();
//				if (pv)
//					cout << "This class is private !" << endl;
//				else
//					cout << "This class is public !" << endl;
//			}
//		}
//		if (!found)
//			cout << "class is not available at this hall !" << endl;
//	}
//
//};