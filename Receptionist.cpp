//#include <vector>
//#include <queue>
//#include "Receptionist.h"
//void Receptionist ::  addMember(Trainee t){ 
//    //هنعمل كذاqueue على حسب عدد الكلاسيسس من نوع trainees 
//    //show available classes 
//    //choose class or wait in the wait list until aclass get empty 
//    vector<Member> traneesC1;
//vector<Tainee> traneesC2;
//vector<Tainee> traneesC3;
//vector<Tainee> traneesC4;
//vector<Tainee> traneesC5;
//vector<Tainee> traneesC6;
//vector<Trainee> trainarr[] = { traneesC2, traneesC3, traneesC4, traneesC5, traneesC6 };
//queue<Trainee> waitlist1;
//queue<Trainee> waitlist2;
//queue<Trainee> waitlist3;
//queue<Trainee> waitlist4;
//queue<Trainee> waitlist5;
//queue<Trainee> waitlist6;
//queue<Trainee> waitlists[] = { waitlist1, waitlist2, waitlist3, waitlist4, waitlist5, waitlist6 };
//queue<Trainee> trainarrEmpty;
//vector<ClassRoom> classesEmpty;
//string choice ;
// bool done =false ;
//for (int i=0 ; i<classes.size() ; i++){
//    if (trainarr[i].size()<classes[i].capacity){
//        classesEmpty.[i].push_back(classes[i]);
//        trainarrEmpty[i].push(trainarr[i])
//        return classesEmpty[i];
//    }
//}
//cin<<choice ;
//for (int i=0 ; i<classes.size() ; i++){
//    if (classesEmpty[i].name == choice ){
//      trainarr[i].push_back(t);
//      done= true 
//    }
//  
//}
//
//if (!done){ 
//    for (int i=0 ; i<classes.size() ; i++){
//        if (classes[i].name == choice ){
//            waitlist[i].push(t);
//    
//        }
//      
//    }
//
//}
//}
//
//
//void Receptionist ::  removeMember(Trainee t){
//
//}
//
//
//
//void Receptionist ::  cancelSubscription (int id ){
//
//}
//void Receptionist :: showAllMembers(){
//
//}
//
//
//
//
//
//
//string getCurrentDate() {
//    auto now = chrono::system_clock::now();
//    time_t now_c = chrono::system_clock::to_time_t(now);
//    tm* parts = localtime(&now_c);
//
//    stringstream ss;
//    ss << put_time(parts, "%Y-%m-%d"); // زي 2025-04-20
//    return ss.str();
//}
//
//string calculateEndDate(string startDate, int monthsToAdd) {
//    int year, month, day;
//    sscanf(startDate.c_str(), "%d-%d-%d", &year, &month, &day);
//
//    month += monthsToAdd;
//    while (month > 12) {
//        month -= 12;
//        year++;
//    }
//
//    char buffer[11];
//    snprintf(buffer, sizeof(buffer), "%04d-%02d-%02d", year, month, day);
//    return string(buffer);
//}
//Staff :: void renewSubscription (int newsubscriptionLong, members m){
//    if (newsubscriptionLong =6 || newsubscriptionLong =1 || newsubscriptionLong =12){
//        m.subscriptionLong = newsubscriptionLong;
//        string this.start =getCurrentDate();
//        string this.end= calculateEndDate(this.start , newsubscriptionLong);
//        cout<<"the update done successfully";
//}    
//    else 
//      cout<<"the subscription not available";
// 
//}