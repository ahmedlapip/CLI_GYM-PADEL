#pragma once
#include <iostream>
#include "LinkedList.h"
#include "Class.h"
#include "Coach.h"
#include "WorkoutPlan.h"
#include "ArrQueue.h"
#include <string>
#include "Hall.h"
using namespace std;

class Gym {

private:
    string Name;
    int WorkingHours;
    string StartTime;
    string EndTime;
   // Manager GymManager;
   // LinkedList<Receptionist> GymReceptionists;
   // LinkedList<Subscription> GymSubscriptions;
    LinkedList<Hall> GymHalls;
   // LinkedList<Trainee> GymTrainees;
   // LinkedList<Coach> GymCoaches;
    LinkedList<gymclass> GymClasses;

public:

    Gym()
    {
        Name = "Gold's Gym";
        WorkingHours = 2;
        StartTime = "11";
        EndTime = "12";
		//GymManager = Manager();
		//GymReceptionists = LinkedList<Receptionist>();
		//GymSubscriptions = LinkedList<Subscription>();
		GymHalls = LinkedList<Hall>();
		//GymTrainees = LinkedList<Trainee>();
		//GymCoaches = LinkedList<Coach>();
    }
    Gym(string name,int hours, string start, string end//Manager gymmanager
        ) {
        Name = name;
        WorkingHours = hours;
        StartTime = start;
        EndTime = end;
        //GymManager = gymmanager;
		//GymReceptionists = LinkedList<Receptionist>();
		//GymSubscriptions = LinkedList<Subscription>();
		GymHalls = LinkedList<Hall>();
		//GymTrainees = LinkedList<Trainee>();
		//GymCoaches = LinkedList<Coach>();
    }
    ~Gym() {};
    void setworkinghours(int wh)
    {
        WorkingHours = wh;
    }
    int getworkinghours()
    {
        return  WorkingHours;
    }
    void setstarttime(string stime)
    {
        StartTime = stime;
    }
    string getstarttime()
    {
        return StartTime;
    }
    void setendtime(string etime)
    {
        EndTime = etime;
    }
    string getendtime()
    {
        return EndTime;
    }
    LinkedList<gymclass> getassclasses()
    {
        return GymClasses;
    }
	void setname(string name)
	{
		Name = name;
	}
    string getname()
    {
		return Name;
    }
	/*
      void setmanager(Manager m)
	{
		GymManager = m;
	}
    Manager getmanager()
    {
		return GymManager;
    }
    */
    
    //class functions
    void addclass()
    {
        gymclass c;
        char pv, choice;
        cout << "Enter class name : ";
        string n;
        cin >> n;
        c.setName(n);
        cout << "Enter class capacity : ";
        int cap;
        cin >> cap;
        c.setCapacity(cap);
       // LinkedList<Trainee>temptrainees = c.getclasstrainees();
       // temptrainees.size = cap;
       // c.setClassTrainees(temptrainees);
        cout << "Enter class start time : ";
		float st;
        cin >> st;
        c.setstarttime(st);
        cout << "Enter class end time : ";
        float et;
        cin >> et;
        c.setendtime(et);
        float tp = et - st;
        c.setTimePeriod(tp);
        cout << "Enter class number of sessions : ";
        int nos;
        cin >> nos;
        c.setNumberOfSessions(nos);
        cout << "Is this class private (y|n) : ";
        cin >> pv;
        if (pv == 'y')
        {
            c.setPrivacy(true);
        }
        else
        {
            c.setPrivacy(false);
        }
        GymClasses.Append(c);
    }
    void removeclass()
    {
        cout << "Enter the class name you want to remove: ";
        string name;
        cin >> name;
        bool found = false;
        int count = 0;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next)
        {
            if (c1->data.getName() == name)
            {
                c1->data.deleteallwops();
                GymClasses.DeleteAt(count);
                cout << "Class has been deleted successfully ! " << endl;
                found = true;
                break;
            }
            count++;
        }

        if (!found)
            cout << "Class not found ! " << endl;
    }
    void displayclass() {
        string n;
        cout << "Enter the name of the class you want to display: ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
                cout << "The class name is " << c1->data.getName() << endl;
                cout << "class capacity is " << c1->data.getCapacity() << endl;
                cout << "class time period is " << c1->data.getTimePeriod() << endl;
                cout << "class number of sessions is " << c1->data.getNumberOfSessions() << endl;
                if (c1->data.getPrivacy())
                {
                    cout << "this class is private !";
                }
                else
                {
                    cout << "this class is public !";
                }
                found = true;
                break;
            }

        }

        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
    void displayallclasses()
    {
        bool empty = true;
        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next)
        {
            cout << "------------------------------------------" << endl;
            cout << "The class name is " << c1->data.getName() << endl;
            cout << "class capacity is " << c1->data.getCapacity() << endl;
            cout << "class time period is " << c1->data.getTimePeriod() << endl;
            cout << "class number of sessions is " << c1->data.getNumberOfSessions() << endl;
            if (c1->data.getPrivacy())
            {
                cout << "this class is private ! " << endl;
            }
            else
            {
                cout << "this class is public !" << endl;
            }
            empty = false;
            cout << "------------------------------------------" << endl;
        }
        if (empty)
            cout << "The system has no classes yet ! " << endl;
    }
    void deleteallclasses()
    {
        while (GymClasses.size > 0) {
            GymClasses.DeleteAt(0);
        }
        cout << "All classes have been deleted successfully!\n";
    }
    void updateclass() {
        string n;
        cin.ignore();
        cout << "Enter the name of the class you want to update: ";
        getline(cin, n);

        bool found = false;
        char co;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != nullptr; c1 = c1->next) {
            if (c1->data.getName() == n) {
                found = true;

                do {
                    int choi;
                    cout << "\nWhat would you like to update?\n"
                        << "  1. Name\n"
                        << "  2. Capacity\n"
                        << "  3. Time Period\n"
                        << "  4. Number Of Sessions\n"
                        << "  5. Privacy\n"
                        << "  6. Exit\n"
                        << "Enter choice: ";
                    cin >> choi;

                    switch (choi) {
                    case 1: {
                        string newName;
                        cout << "Enter new class name: ";
                        getline(cin, newName);
                        c1->data.setName(newName);
                        break;
                    }
                    case 2: {
                        int newCap;
                        cout << "Enter new capacity: ";
                        cin >> newCap;
                        c1->data.setCapacity(newCap);
                        break;
                    }
                    case 3: {
                        float newTime;
                        cout << "Enter new Time Period: ";
                        cin >> newTime;
                        c1->data.setTimePeriod(newTime);
                        break;
                    }
                    case 4: {
                        int nos;
                        cout << "Enter New Number Of Sessions: ";
                        cin >> nos;
                        c1->data.setNumberOfSessions(nos);
                        break;
                    }
                    case 5: {
                        char pri;
                        cout << "Enter new Privacy (y/n): ";
                        cin >> pri;
                        if (pri == 'y') {
                            c1->data.setPrivacy(true);
                        }
                        else if (pri == 'n') {
                            c1->data.setPrivacy(false);
                        }
                        else {
                            cout << "Invalid input for privacy. Use 'y' or 'n'." << endl;
                        }
                        break;
                    }
                    case 6:
                    {
                        cout << "Exiting update menu." << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice!" << endl;
                    }

                    cout << "Class updated successfully!\n";
                    cout << "Do you want to update anything else? (y/n): ";
                    cin >> co;

                } while (co == 'y' || co == 'Y');

                break;
            }
        }

        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }

    void addwoptoclass()
    {
        string n;
        cout << "Enter the name of the class you want to add a workout plan to : ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
				c1->data.addworkoutplan();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
    void delwopfromclass()
    {
        string n;
        cout << "Enter the name of the class you want to add a workout plan to : ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
				c1->data.deleteworkoutplan();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
    void delallclasswops()
    {
        string n;
        cout << "Enter the name of the class you want to remove it workout plans : ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
				c1->data.deleteallwops();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
    void displayclasswop()
    {
        string n;
        cout << "Enter the name of the class you want to display a workout plan from : ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
				c1->data.displaywop();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
    void displayallclasswops()
    {
        string n;
        cout << "Enter the name of the class you want to display its workout plans : ";
        cin >> n;
        bool found = false;

        for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
            if (c1->data.getName() == n)
            {
                c1->data.displaywops();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Class not found! Please check the name and try again." << endl;
        }
    }
	void updateclasswop()
	{
		string n;
		cout << "Enter the name of the class you want to update a workout plan from : ";
		cin >> n;
		bool found = false;

		for (Node<gymclass>* c1 = GymClasses.head; c1 != NULL; c1 = c1->next) {
			if (c1->data.getName() == n)
			{
				c1->data.updatewop();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Class not found! Please check the name and try again." << endl;
		}

	}

    //hall functions
    void addhall()
    {
        Hall h;
		string n, c;
		cout << "Enter hall name : ";
		cin >> n;
		h.setName(n);
		cout << "Enter hall code : ";
		cin >> c;
		h.setCode(c);
		GymHalls.Append(h);
		cout << "Hall has been added successfully!" << endl;
    }
	void removehall()
	{
		cout << "Enter the hall name you want to remove: ";
		string name;
		cin >> name;
		bool found = false;
		int count = 0;

		for (Node<Hall>* h = GymHalls.head; h != NULL; h = h->next)
		{
			if (h->data.getName() == name)
			{
				GymHalls.DeleteAt(count);
                cout << "Hall has been deleted successfully ! " << endl;
				found = true;
				break;
			}
			count++;
		}
		if (!found)
			cout << "Hall not found ! " << endl;
	}
	void displayhall()
	{
		string n;
		cout << "Enter the name of the hall you want to display: ";
		cin >> n;
		bool found = false;

		for (Node<Hall>* h = GymHalls.head; h != NULL; h = h->next) {
			if (h->data.getName() == n)
			{
				cout << "The hall name is " << h->data.getName() << endl;
				cout << "The hall code is " << h->data.getCode() << endl;
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "Hall not found! Please check the name and try again." << endl;
		}
	}
	void displayallhalls()
	{
		bool empty = true;
		for (Node<Hall>* h = GymHalls.head; h != NULL; h = h->next)
		{
			cout << "------------------------------------------" << endl;
			cout << "The hall name is " << h->data.getName() << endl;
			cout << "The hall code is " << h->data.getCode() << endl;
			empty = false;
			cout << "------------------------------------------" << endl;
		}
		if (empty)
			cout << "The system has no halls yet ! " << endl;
	}
    void deleteallhalls()
    {
        while (GymHalls.size > 0) {
            GymHalls.DeleteAt(0);
        }
		cout << "All halls have been deleted successfully!\n";
    }
	void updatehall()
	{
		string n;
		cin.ignore();
		cout << "Enter the name of the hall you want to update: ";
		getline(cin, n);

		bool found = false;
		char co;

		for (Node<Hall>* h = GymHalls.head; h != nullptr; h = h->next) {
			if (h->data.getName() == n) {
				found = true;

				do {
					int choi;
					cout << "\nWhat would you like to update?\n"
						<< "  1. Name\n"
						<< "  2. Code\n"
						<< "  3. Exit\n"
						<< "Enter choice: ";
					cin >> choi;

					switch (choi) {
					case 1: {
						string newName;
						cout << "Enter new hall name: ";
						getline(cin, newName);
						h->data.setName(newName);
						break;
					}
					case 2: {
						string newCode;
						cout << "Enter new hall code: ";
						cin >> newCode;
						h->data.setCode(newCode);
						break;
					}
					case 3:
					{
						cout << "Exiting update menu." << endl;
						break;
					}
					default:
						cout << "Invalid choice!" << endl;
					}

					cout << "Hall updated successfully!\n";
					cout << "Do you want to update anything else? (y/n): ";
					cin >> co;

				} while (co == 'y' || co == 'Y');

				break;
			}
		}

		if (!found) {
			cout << "Hall not found! Please check the name and try again." << endl;
		}
	}

	//subscription functions
    /*
    	void addsubscription()
	{

		Subscription s;
		cout << "Enter the subscription ID : ";
		string id;
		cin >> id;
		s.setName(id);
		cout << "Enter the subscription price : ";
		float price;
		cin >> price;
		s.setPrice(price);
		cout << "Enter the subscription start date : ";
		Date start;
		s.setStartDate();
        cout << "Enter the subscription end date : ";
        Date end;
        s.setEndDate(end);
        GymSubscriptions.Append(s);
	}
    void removeSubscription()
    {
        cout << "Enter the subscription id you want to remove: ";
        string id;
        cin >> id;
        bool found = false;
        int count = 0;

        for (Node<subscription>* s = GymSubscriptions.head; s != NULL; s = s->next)
        {
            if (s->data.getId() == id)
            {
                GymSubscriptions.DeleteAt(count);
                cout << "Subscription has been deleted successfully ! " << endl;
                found = true;
                break;
            }
            count++;
        }

        if (!found)
            cout << "Class not found ! " << endl;
    }
	void displaySubscription()
	{
		cout << "Enter the subscription id you want to display: ";
		string id;
		cin >> id;
		bool found = false;

		for (Node<subscription>* s = GymSubscriptions.head; s != NULL; s = s->next) {
			if (s->data.getId() == id)
			{
				cout << "The subscription ID is " << s->data.getId() << endl;
				cout << "The subscription price is " << s->data.getPrice() << endl;
				cout << "The subscription start date is " << s->data.getStartDate() << endl;
				cout << "The subscription end date is " << s->data.getEndDate() << endl;
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "Subscription not found! Please check the name and try again." << endl;
		}
	}
    void displayallSubscriptions()
    {
        bool empty = true;
        for (Node<subscription>* s = GymSubscriptions.head; s != NULL; s = s->next)
        {
            cout << "------------------------------------------" << endl;
            cout << "The subscription ID is " << s->data.getId() << endl;
            cout << "The subscription price is " << s->data.getPrice() << endl;
            cout << "The subscription start date is " << s->data.getStartDate() << endl;
            cout << "The subscription end date is " << s->data.getEndDate() << endl;
            break;
            empty = false;
            cout << "------------------------------------------" << endl;
        }
        if (empty)
            cout << "The system has no subscriptions yet ! " << endl;
    }
	void deleteallSubscriptions()
	{
		while (GymSubscriptions.size > 0) {
			GymSubscriptions.DeleteAt(0);
		}
		cout << "All subscriptions have been deleted successfully!\n";
	}
	void updateSubscription()
	{
		string id;
		cin.ignore();
		cout << "Enter the subscription ID you want to update: ";
		getline(cin, id);

		bool found = false;
		char co;

		for (Node<subscription>* s = GymSubscriptions.head; s != nullptr; s = s->next)
        {
			if (s->data.getId() == id) 
            {
				found = true;

				do
                {
					int choi;
					cout << "\nWhat would you like to update?\n"
						<< "  1. ID\n"
						<< "  2. Price\n"
						<< "  3. Start Date\n"
						<< "  4. End Date\n"
						<< "  5. Exit\n"
						<< "Enter choice: ";
					cin >> choi;

					switch (choi) {
					case 1: {
						string newId;
						cout << "Enter new subscription ID: ";
						getline(cin, newId);
						s->data.setId(newId);
						break;
					}
					case 2: {
						float newPrice;
						cout << "Enter new price: ";
						cin >> newPrice;
						s->data.setPrice(newPrice);
						break;
					}
					case 3: {
						Date newStartDate;
						cout << "Enter new start date: ";
						cin >> newStartDate;
						s->data.setStartDate(newStartDate);
						break;
					}
					case 4: {
						Date newEndDate;
						cout << "Enter new end date: ";
						cin >> newEndDate;
						s->data.setEndDate(newEndDate);
						break;
					}
					case 5:
					{
						cout << "Exiting update menu." << endl;
						break;
					}
					default:
						cout << "Invalid choice!" << endl;
					}

					cout << "Subscription updated successfully!\n";
					cout << "Do you want to update anything else? (y/n): ";
					cin >> co;

				} while (co == 'y' || co == 'Y');
			}
		}
		if (!found) {
			cout << "Subscription not found! Please check the ID and try again." << endl;
		}
	}
    */

    //coach functions
    /*
    void addcoach(Coach c)
    {
        GymCoaches.Append(c);
    }
    void removecoach()
    {
        string name;
        bool found = false;
        int index = 0;
        cout << "Enter the name of the coach you want to remove: ";
        cin >> name;
        for (Node<Coach>* c = GymCoaches.head; c != NULL; c = c->next) {
            if (c->data.getname() == name)
            {
                GymCoaches.DeleteAt(index);
                cout << "Coach has been deleted successfully ! " << endl;
                found = true;
                break;
            }
            index++;
        }
        if (!found)
            cout << "Coach not found ! " << endl;
    }
    void displaycoach()
    {
        string name;
        cout << "Enter the name of the coach you want to display: ";
        cin >> name;
        bool found = false;
        for (Node<Coach>* c = GymCoaches.head; c != NULL; c = c->next) {
            if (c->data.getname()==name)
            {
                cout << "Coach name  : " << c->data.getname() << endl;
                cout << "Coach id    : " << c->data.getid() << endl;
                c->data.listClasses();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Coach not found! Please check the name and try again." << endl;
        }
    }
    void displayallcoaches()
    {
        bool empty = true;
        for (Node<Coach>* c = GymCoaches.head; c != NULL; c = c->next)
        {
            empty = false;
            cout << "------------------------------------------" << endl;
            cout << "Coach name  : " << c->data.getname() << endl;
            cout << "Coach id    : " << c->data.getid() << endl;
            c->data.listClasses();
            cout << "------------------------------------------" << endl;
        }
        if (empty)
            cout << "The system has no coaches yet ! " << endl;
    }
    void deleteallcoaches()
    {
        while (GymCoaches.size > 0) {
            GymCoaches.DeleteAt(0);
        }
        cout << "All coaches have been deleted successfully!\n";
    }
*/

    //receptionist functions
    /*
        void addreceptionist(Receptionist r)
    {
        GymReceptionists.Append(r);
    }
	void removereceptionist()
	{
		string name;
		bool found = false;
		int index = 0;
		cout << "Enter the name of the receptionist you want to remove: ";
		cin >> name;
		for (Node<Receptionist>* r = GymReceptionists.head; r != NULL; r = r->next) {
			if (r->data.getname() == name)
			{
				GymReceptionists.DeleteAt(index);
				cout << "Receptionist has been deleted successfully ! " << endl;
				found = true;
				break;
			}
			index++;
		}
		if (!found)
			cout << "Receptionist not found ! " << endl;
	}
    void displayreceptionist()
    {
        string name;
		cout << "enter the name of the receptionist you want to display: ";
		cin >> name;
		bool found = false;
		for (Node<Receptionist>* r = GymReceptionists.head; r != NULL; r = r->next) {
			if (r->data.getname() == name)
			{
				cout << "Receptionist name  : " << r->data.getname() << endl;
				cout << "Receptionist id    : " << r->data.getid() << endl;
				found = true;
                break;
			}
		}
		if (!found)
			cout << "Receptionist not found! Please check the name and try again." << endl;		
    }
    void displayallreceptionists()
    {
		bool empty = true;
		for (Node<Receptionist>* r = GymReceptionists.head; r != NULL; r = r->next)
		{
			empty = false;
			cout << "------------------------------------------" << endl;
			cout << "Receptionist name  : " << r->data.getname() << endl;
			cout << "Receptionist id    : " << r->data.getid() << endl;
			cout << "------------------------------------------" << endl;

        }
		if (empty)
			cout << "The system has no receptionists yet ! " << endl;
    }
	void deleteallreceptionists()
	{
		while (GymReceptionists.size > 0) {
			GymReceptionists.DeleteAt(0);
		}
		cout << "All receptionists have been deleted successfully!\n";
	}
    */

	//trainee functions
    /*
    	void addtrainee(Trainee t)
	{
		GymTrainees.Append(t);
	}
    void removetrainee()
    {
		string name;
		bool found = false;
		int index = 0;
		cout << "Enter the name of the trainee you want to remove: ";
		cin >> name;
        for (Node<Trainee>* t1 = GymTrainees.head; t1 != NULL; t1 = t1->next) {
            if (t1->data.getname() == name)
            {
                GymCoaches.DeleteAt(index);
                cout << "trainee has been deleted successfully ! " << endl;
                found = true;
                break;
            }
            index++;
        }
        if (!found)
            cout << "trainee not found ! " << endl;
    }
    void displaytrainee()
    {
		string name;
		cout << "Enter the name of the trainee you want to display: ";
		cin >> name;
		bool found = false;
		for (Node<Trainee>* t1 = GymTrainees.head; t1 != NULL; t1 = t1->next) {
			if (t1->data.getname() == name)
			{
				found = true;
				cout << "Trainee name  : " << t1->data.getname() << endl;
				cout << "Trainee id    : " << t1->data.getid() << endl;
				cout << "Trainee gender   : " << t1->data.getgender() << endl;
				cout << "Trainee phone number   : " << t1->data.getphonenumber() << endl;
				cout << "Trainee E-Mail   : " << t1->data.getemail() << endl;
				cout << "Trainee date of birth   : " << t1->data.getdateofbirth() << endl;
				break;
			}
		}
		if (!found)
			cout << "Trainee not found! Please check the name and try again." << endl;
    }
    void displayalltrainees()
    {
		bool empty = true;
		for (Node<Trainee>* t1 = GymTrainees.head; t1 != NULL; t1 = t1->next)
		{
			empty = false;
			cout << "------------------------------------------" << endl;
			cout << "Trainee name  : " << t1->data.getname() << endl;
			cout << "Trainee id    : " << t1->data.getid() << endl;
            cout << "Trainee gender   : " << t1->data.getgender() << endl;
            cout << "Trainee phone number   : " << t1->data.getphonenumber() << endl;
            cout << "Trainee E-Mail   : " << t1->data.getemail() << endl;
            cout << "Trainee date of birth   : " << t1->data.getdateofbirth() << endl;
			cout << "------------------------------------------" << endl;
        }
		if (empty)
			cout << "The system has no trainees yet ! " << endl;
    }
    void deletealltrainees()
    {
		while (GymTrainees.size > 0) {
			GymTrainees.DeleteAt(0);
		}   
		cout << "All trainees have been deleted successfully!\n";
    }
    */

};