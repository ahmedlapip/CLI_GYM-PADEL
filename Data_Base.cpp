#include "Data_Base.h"


Data_Base* Data_Base::InstanceDB = nullptr;
std::mutex Data_Base::mtx;

Data_Base* Data_Base:: GetDB() {
	if (InstanceDB == nullptr) {
		std::lock_guard<std::mutex>lock(mtx);//lock multithreaded
		if (InstanceDB == nullptr)
			InstanceDB = new Data_Base();
	}
	return InstanceDB;
}

Data_Base::Data_Base() {
		
}