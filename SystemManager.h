#pragma once
#include <iostream>
#include <unordered_map>
using namespace std;

#include "Trainee.h"
#include "GymClass.h"
#include "Padel.h"
#include "Gym.h"
#include "Subscription.h"
#include "Court.h"
#include "Booking.h"
#include "Hall.h"

class SystemManager
{
	public:
	SystemManager();
	~SystemManager();
	void saveData();
	void loadData();
};

