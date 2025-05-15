#include "System.h"
#include <iostream>

// Trainee
//load
unordered_map<int, Trainee> System::Load_Trainee(xlnt::worksheet  & ws) {
    unordered_map<int, Trainee> traineeList;

    for (auto row : ws.rows(false)) {
        // Skip the header row
        if (row[0].to_string() == "ID") continue;
        Trainee t;
        t.setId(row[0].value<int>());                      // A - ID
        t.setName(row[1].to_string());                     // B - Name
        t.setPhone(row[2].to_string());                    // C - Phone Number
        t.setGender(row[3].to_string());                   // D - Gender
        t.setDateOfBirth(row[4].to_string());              // E - Date of Birth
        t.setEmail(row[5].to_string());                    // F - Email
        t.setPassword(row[6].to_string());                 // G - Password
        t.setIsVIP(row[7].value<bool>()); 
        traineeList[t.getId()] = t;
    }

    return traineeList;
}

//save
void System::Save_Trainee(xlnt::worksheet& ws, unordered_map<int, Trainee> traineeList) {
    
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 7; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : traineeList) {
        int id = pair.first;
        Trainee t = pair.second;
        ws.cell("A" + std::to_string(row_num)).value(t.getId());
        ws.cell("B" + std::to_string(row_num)).value(t.getName());
        ws.cell("C" + std::to_string(row_num)).value(t.getPhone());
        ws.cell("D" + std::to_string(row_num)).value(t.getGender());
        ws.cell("E" + std::to_string(row_num)).value(t.getDateOfBirth());
        ws.cell("F" + std::to_string(row_num)).value(t.getEmail());
        ws.cell("G" + std::to_string(row_num)).value(t.getPassword());
        ws.cell("H" + std::to_string(row_num)).value(t.getIsVIP());

        row_num++;
    }  
    
}

/// Coatch
//load
unordered_map<int, Coatch1> System::Load_Coatch(xlnt::worksheet & ws) {
    unordered_map<int, Coatch1> coatchList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Coatch1 c;
        c.setid(row[0].value<int>());
        c.setname(row[1].to_string());
        c.setpassword(row[2].to_string());
        c.setSalary(row[3].value<float>());

        coatchList[std::stoi(row[0].to_string())] = c;
    }

    return coatchList;
}

//save
void System::Save_Coatch(xlnt::worksheet& ws, unordered_map<int, Coatch1> coatchList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 4; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : coatchList) {
        int id = pair.first;
        Coatch1 c = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(c.getid());
        ws.cell("B" + std::to_string(row_num)).value(c.getname());
        ws.cell("C" + std::to_string(row_num)).value(c.getpassword());
        ws.cell("D" + std::to_string(row_num)).value(c.getSalary());

        row_num++;  
    }
}



// Receptionist
//load
unordered_map<int, Receptionist> System::Load_Receptionist(xlnt::worksheet & ws) {
    unordered_map<int, Receptionist> receptionistList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Receptionist r;
        r.setid(row[0].value<int>());
        r.setname(row[1].to_string());
        r.setpassword(row[2].to_string());
        r.setSalary(row[3].value<float>());

        receptionistList[std::stoi(row[0].to_string())] = r;
    }

    return receptionistList;
}

//save
void System::Save_Receptionist(xlnt::worksheet& ws, unordered_map<int, Receptionist> receptionistList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 4; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : receptionistList) {
        int id = pair.first;
        Receptionist r = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(r.getid());
        ws.cell("B" + std::to_string(row_num)).value(r.getname());
        ws.cell("C" + std::to_string(row_num)).value(r.getpassword());
        ws.cell("D" + std::to_string(row_num)).value(r.getSalary());
    
        row_num++;
    }
}


// Manager
//load

unordered_map<int, Manager> System::Load_Manager(xlnt::worksheet & ws) {
    unordered_map<int, Manager> managerList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Manager m;
        m.setid(row[0].value<int>());
        m.setname(row[1].to_string());
        m.setpassword(row[2].to_string());

        managerList[std::stoi(row[0].to_string())] = m;
    }

    return managerList;
}

//save
void System::Save_Manager(xlnt::worksheet& ws, unordered_map<int, Manager> managerList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 3; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : managerList) {
        int id = pair.first;
    int row_num = 2;
    for (const auto& pair : managerList) {
        int id = pair.first;
        Manager m = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(m.getid());
        ws.cell("B" + std::to_string(row_num)).value(m.getname());
        ws.cell("C" + std::to_string(row_num)).value(m.getpassword());

        row_num++;
    }

}
}



// Gym Class
//load
unordered_map<int, GymClass> System::Load_GymClass(xlnt::worksheet & ws) {
    unordered_map<int, GymClass> classList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        GymClass g;
        g.setname_code(row[0].to_string());
        g.setCapacity(row[1].value<int>());
        g.setStartTime(row[2].value<float>());
        g.setEndTime(row[3].value<float>());
        g.setTimePeriod(row[4].value<float>());
        g.setNumberOfSessions(row[5].value<int>());
        g.setType(row[6].value<bool>());
        g.setCoachID(row[7].value<int>());

        classList[std::stoi(row[0].to_string())] = g;
    }   

    return classList;
}

//save
void System::Save_GymClass(xlnt::worksheet& ws, unordered_map<int, GymClass> classList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 8; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : classList) {
        int id = pair.first;
        GymClass g = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(g.getname_code());
        ws.cell("B" + std::to_string(row_num)).value(g.getCapacity());
        ws.cell("C" + std::to_string(row_num)).value(g.getStartTime()); 
        ws.cell("D" + std::to_string(row_num)).value(g.getEndTime());
        ws.cell("E" + std::to_string(row_num)).value(g.getTimePeriod());
        ws.cell("F" + std::to_string(row_num)).value(g.getNumberOfSessions());
        ws.cell("G" + std::to_string(row_num)).value(g.getType());
        ws.cell("H" + std::to_string(row_num)).value(g.getCoachID());

        row_num++;
    }   
    }

// Hall
//load
unordered_map<int, Hall> System::Load_Hall(xlnt::worksheet & ws) {
    unordered_map<int, Hall> hallList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Hall h;
        h.setCode(row[0].to_string());
        h.setName(row[1].to_string());

        hallList[std::stoi(row[0].to_string())] = h;
    }

    return hallList;
}

//save
void System::Save_Hall(xlnt::worksheet& ws, unordered_map<int, Hall> hallList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 2; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    for (const auto& pair : hallList) {
        int id = pair.first;
        Hall h = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(h.getCode());
        ws.cell("B" + std::to_string(row_num)).value(h.getName());

        row_num++;
    }
}

// Workout Plan
//load
unordered_map<int, WorkoutPlan> System::Load_WorkoutPlan(xlnt::worksheet & ws) {
    unordered_map<int, WorkoutPlan> workoutPlanList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        WorkoutPlan wp;
        wp.setname_code(row[0].to_string());
        wp.setHoursPerDay(row[1].value<float>());
        wp.setIntensity(row[2].to_string());
        wp.setLostCalories(row[3].value<float>());
        wp.setClass_name_code(row[4].to_string());


        workoutPlanList[std::stoi(row[0].to_string())] = wp;
    }

    return workoutPlanList;
}

//save
void System::Save_WorkoutPlan(xlnt::worksheet& ws, unordered_map<int, WorkoutPlan> workoutPlanList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 5; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;

    int row_num = 2;
    for (const auto& pair : workoutPlanList) {
        int id = pair.first;
        WorkoutPlan wp = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(wp.getname_code());
        ws.cell("B" + std::to_string(row_num)).value(wp.getHoursPerDay());
        ws.cell("C" + std::to_string(row_num)).value(wp.getIntensity());
        ws.cell("D" + std::to_string(row_num)).value(wp.getLostCalories());
        ws.cell("E" + std::to_string(row_num)).value(wp.getClass_name_code());
        row_num++;
    }
}

// Court
//load
unordered_map<int, Court> System::Load_Court(xlnt::worksheet & ws) {
    unordered_map<int, Court> courtList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "Name Code") continue;

        Court c;
        c.setName_code(row[0].to_string());
        c.setPricePerHour(row[1].value<float>());
        c.setLocation(row[2].to_string());
        c.setIsAvailable(row[3].value<bool>());
        
        courtList[std::stoi(row[0].to_string())] = c;
    }

    return courtList;
}

//save
void System::Save_Court(xlnt::worksheet& ws, unordered_map<int, Court> courtList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 4; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }


    int row_num = 2;
    for (const auto& pair : courtList) {
        int id = pair.first;
        Court c = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(c.getName_code());
        ws.cell("B" + std::to_string(row_num)).value(c.getPricePerHour());
        ws.cell("C" + std::to_string(row_num)).value(c.getLocation());
        ws.cell("D" + std::to_string(row_num)).value(c.getIsAvailable());

        row_num++;
    }
}

// Booking
//load

unordered_map<int, Booking> System::Load_Booking(xlnt::worksheet & ws) {
    unordered_map<int, Booking> bookingList;

    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Booking b;


        b.setId(row[0].to_string());
        b.setDay(row[1].to_string());
        b.setPrice(row[2].value<float>());
        b.setStartTime(row[3].to_string());
        b.setEndTime(row[4].to_string());
        b.setTimePeriod(row[5].value<float>());
        b.setIsConfirmed(row[6].value<bool>());
        bookingList[std::stoi(row[0].to_string())] = b;
    }

    return bookingList;
}

//save
void System::Save_Booking(xlnt::worksheet& ws, unordered_map<int, Booking> bookingList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 7; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    int row_num = 2;
    for (const auto& pair : bookingList) {
        int id = pair.first;
        Booking b = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(b.getId());
        ws.cell("B" + std::to_string(row_num)).value(b.getDay());
        ws.cell("C" + std::to_string(row_num)).value(b.getPrice());
        ws.cell("D" + std::to_string(row_num)).value(b.getStartTime());
        ws.cell("E" + std::to_string(row_num)).value(b.getEndTime());
        ws.cell("F" + std::to_string(row_num)).value(b.getTimePeriod());
        ws.cell("G" + std::to_string(row_num)).value(b.getIsConfirmed());

        row_num++;
    }
}   


// Subscription

unordered_map<int, Subscription> System::Load_Subscription(xlnt::worksheet & ws) {
    unordered_map<int, Subscription> subscriptionList;

    
    for (auto row : ws.rows(false)) {
        if (row[0].to_string() == "ID") continue;

        Subscription s;
        s.setID(row[0].value<int>());
        s.setTraineeID(row[1].value<int>());
        s.setStartDate(row[2].to_string());
        s.setPeriod(row[3].value<int>());
        s.setEndDate(row[4].to_string());
        s.setPrice(row[5].value<float>());

        subscriptionList[std::stoi(row[0].to_string())] = s;
    }

    return subscriptionList;
}

//save
void System::Save_Subscription(xlnt::worksheet& ws, unordered_map<int, Subscription> subscriptionList) {
    auto last_row = ws.highest_row();
    for (int row = 2; row <= last_row; row++) {
        for (int col = 1; col <= 6; col++) { 
            auto cell_ref = xlnt::cell_reference(col, row);
            if (ws.has_cell(cell_ref)) {
                ws.cell(cell_ref).clear_value();
            }
        }
    }

    int row_num = 2;
    int row_num = 2;
    for (const auto& pair : subscriptionList) {
        int id = pair.first;
        Subscription s = pair.second;

        ws.cell("A" + std::to_string(row_num)).value(s.getID());
        ws.cell("B" + std::to_string(row_num)).value(s.getTraineeID());
        ws.cell("C" + std::to_string(row_num)).value(s.getStartDate());
        ws.cell("D" + std::to_string(row_num)).value(s.getPeriod());
        ws.cell("E" + std::to_string(row_num)).value(s.getEndDate());
        ws.cell("F" + std::to_string(row_num)).value(s.getPrice());

        row_num++;
    }
}



void System::Load_All_Data() {
    xlnt::workbook& wb = this->db->getGym_Padel_DB("Gym_Padel_DB.xlsx");

    this->traineeList = this->Load_Trainee(this->db->GetTrainee("Trainees"));
    this->coatchList = this->Load_Coatch(this->db->GetCoach("Coatch"));
    this->receptionistList = this->Load_Receptionist(this->db->GetReceptionist("Receptionist"));
    this->managerList = this->Load_Manager(this->db->GetManager("Manager"));
    this->classList = this->Load_GymClass(this->db->GetGymClass("GymClass"));
    this->hallList = this->Load_Hall(this->db->GetHallSystem("HallSystem"));
    this->workoutPlanList = this->Load_WorkoutPlan(this->db->GetWorkoutPlan("WorkoutPlan"));
    this->CourtList = this->Load_Court(this->db->GetCourt("Court"));
    this->BookingList = this->Load_Booking(this->db->GetBooking("Booking"));
    this->SubscriptionList = this->Load_Subscription(this->db->GetSubscription("Subscription"));
}

void System::Save_All_Data() {
    xlnt::workbook& wb = this->db->getGym_Padel_DB("Gym_Padel_DB.xlsx");
    
    // Update worksheets in existing workbook
    this->Save_Trainee(this->db->GetTrainee("Trainees"), this->traineeList);
    this->Save_Coatch(this->db->GetCoach("Coatch"), this->coatchList);
    this->Save_Receptionist(this->db->GetReceptionist("Receptionist"), this->receptionistList);
    this->Save_Manager(this->db->GetManager("Manager"), this->managerList);
    this->Save_GymClass(this->db->GetGymClass("GymClass"), this->classList);
    this->Save_Hall(this->db->GetHallSystem("HallSystem"), this->hallList);
    this->Save_WorkoutPlan(this->db->GetWorkoutPlan("WorkoutPlan"), this->workoutPlanList);
    this->Save_Court(this->db->GetCourt("Court"), this->CourtList);
    this->Save_Booking(this->db->GetBooking("Booking"), this->BookingList);
    this->Save_Subscription(this->db->GetSubscription("Subscription"), this->SubscriptionList);
    
    // Save once at the end
    this->db->SaveGym_Padel_DB("Gym_Padel_DB.xlsx");
}