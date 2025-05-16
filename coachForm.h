#pragma once
#include "Coatch1.h"
#include "RemoveSession.h" 
#include "Home.h"
#include "Add_Session.h"
#include "plan.h"
#include "RemovePlan.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace Gym {

    public ref class coachForm : public Form
    {
    private:
        Coatch1* currentCoach;

        TabControl^ tabControl;
        TabPage^ tabHome;
        TabPage^ tabAddSession;
        TabPage^ tabPlan;
        TabPage^ tabRemovePlan;
        TabPage^ tabRemoveSession;

        Home^ homeTab;
        AddSession^ addSessionTab;
        workoutPlan^ planTab;
        RemoveWorkoutPlan^ removePlanTab;
        RemoveSession^ removeSessionTab; 

    public:
        coachForm(Coatch1* coach)
        {
            currentCoach = coach;
            InitializeComponent();
        }

    private:
        void InitializeComponent(void)
        {
            this->Text = "Coach Dashboard";
            this->Size = Drawing::Size(800, 600);
            this->StartPosition = FormStartPosition::CenterScreen;

            tabControl = gcnew TabControl();
            tabControl->Dock = DockStyle::Fill;

            tabHome = gcnew TabPage("Home");
            tabAddSession = gcnew TabPage("Add Session");
            tabPlan = gcnew TabPage("Workout Plan");
            tabRemovePlan = gcnew TabPage("Remove Plan");
            tabRemoveSession = gcnew TabPage("Remove Session");

            homeTab = gcnew Home(currentCoach);
            addSessionTab = gcnew AddSession(currentCoach);
            planTab = gcnew workoutPlan(currentCoach);
            removePlanTab = gcnew RemoveWorkoutPlan(currentCoach);
            removeSessionTab = gcnew RemoveSession(currentCoach);

            homeTab->Dock = DockStyle::Fill;
            addSessionTab->Dock = DockStyle::Fill;
            planTab->Dock = DockStyle::Fill;
            removePlanTab->Dock = DockStyle::Fill;
            removeSessionTab->Dock = DockStyle::Fill;

            tabHome->Controls->Add(homeTab);
            tabAddSession->Controls->Add(addSessionTab);
            tabPlan->Controls->Add(planTab);
            tabRemovePlan->Controls->Add(removePlanTab);
            tabRemoveSession->Controls->Add(removeSessionTab);

            tabControl->TabPages->Add(tabHome);
            tabControl->TabPages->Add(tabAddSession);
            tabControl->TabPages->Add(tabRemoveSession);
            tabControl->TabPages->Add(tabPlan);
            tabControl->TabPages->Add(tabRemovePlan);

            this->Controls->Add(tabControl);
        }
    };
}
