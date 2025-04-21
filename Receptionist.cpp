#include "Receptionist.h"
void Receptionist ::  addMember(Trainee t){ 
    //هنعمل كذاqueue على حسب عدد الكلاسيسس من نوع trainees 
    //show available classes 
    //choose class or wait in the wait list until aclass get empty 


}


void Receptionist ::  removeMember(Trainee t){

}



void Receptionist ::  cancelSubscription (int id ){

}
void Receptionist :: showAllMembers(){

}






string getCurrentDate() {
    auto now = chrono::system_clock::now();
    time_t now_c = chrono::system_clock::to_time_t(now);
    tm* parts = localtime(&now_c);

    stringstream ss;
    ss << put_time(parts, "%Y-%m-%d"); // زي 2025-04-20
    return ss.str();
}

string calculateEndDate(string startDate, int monthsToAdd) {
    int year, month, day;
    sscanf(startDate.c_str(), "%d-%d-%d", &year, &month, &day);

    month += monthsToAdd;
    while (month > 12) {
        month -= 12;
        year++;
    }

    char buffer[11];
    snprintf(buffer, sizeof(buffer), "%04d-%02d-%02d", year, month, day);
    return string(buffer);
}
Staff :: void renewSubscription (int newsubscriptionLong, members m){
    if (newsubscriptionLong =6 || newsubscriptionLong =1 || newsubscriptionLong =12){
        m.subscriptionLong = newsubscriptionLong;
        string this.start =getCurrentDate();
        string this.end= calculateEndDate(this.start , newsubscriptionLong);
        cout<<"the update done successfully";
}    
    else 
      cout<<"the subscription not available";
 
}