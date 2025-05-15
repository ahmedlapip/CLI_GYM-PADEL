#pragma once
#include <iostream>
#include <Windows.h>
#using <System.Windows.Forms.dll>
#include "coatch1.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

namespace Gym {

    public ref class WorkoutPlan : public UserControl
    {
    private:
        Coatch1* currentCoach;

    public:
        WorkoutPlan(Coatch1* coach)
        {
            currentCoach = coach;
            InitializeComponent();
            LoadWorkoutPlans(); 
        }

    protected:
        ~WorkoutPlan()
        {
            if (components)
                delete components;
        }

    private:
        TextBox^ txtSession;
        TextBox^ txtWorkoutPlan;
        Button^ btnAssignWorkout;
        DataGridView^ workoutPlanDataGridView;
        Label^ lblSession;
        Label^ lblWorkoutPlan;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            txtSession = gcnew TextBox();
            txtWorkoutPlan = gcnew TextBox();
            btnAssignWorkout = gcnew Button();
            workoutPlanDataGridView = gcnew DataGridView();
            lblSession = gcnew Label();
            lblWorkoutPlan = gcnew Label();

         
            lblSession->Text = "Session Name:";
            lblSession->Location = Drawing::Point(20, 0);
            lblSession->Size = Drawing::Size(150, 20);

            
            txtSession->Location = Drawing::Point(20, 20);
            txtSession->Size = Drawing::Size(200, 22);

           
            lblWorkoutPlan->Text = "Workout Plan Name:";
            lblWorkoutPlan->Location = Drawing::Point(20, 50);
            lblWorkoutPlan->Size = Drawing::Size(150, 20);

           
            txtWorkoutPlan->Location = Drawing::Point(20, 70);
            txtWorkoutPlan->Size = Drawing::Size(200, 22);

            btnAssignWorkout->Text = "Assign Workout Plan";
            btnAssignWorkout->Location = Drawing::Point(20, 110);
            btnAssignWorkout->Size = Drawing::Size(200, 30);
            btnAssignWorkout->Click += gcnew EventHandler(this, &WorkoutPlan::btnAssignWorkout_Click);


            workoutPlanDataGridView->Location = Drawing::Point(20, 160);
            workoutPlanDataGridView->Size = Drawing::Size(640, 200);
            workoutPlanDataGridView->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;
            workoutPlanDataGridView->ColumnCount = 2;
            workoutPlanDataGridView->Columns[0]->Name = "Session Name";
            workoutPlanDataGridView->Columns[1]->Name = "Workout Plan";
            workoutPlanDataGridView->ReadOnly = true;
            workoutPlanDataGridView->AllowUserToAddRows = false;
            workoutPlanDataGridView->AllowUserToDeleteRows = false;
            workoutPlanDataGridView->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
            workoutPlanDataGridView->ColumnHeadersDefaultCellStyle->Font = gcnew Drawing::Font("Arial", 10);
            workoutPlanDataGridView->DefaultCellStyle->Font = gcnew Drawing::Font("Arial", 10);

            // UserControl
            this->Controls->Add(lblSession);
            this->Controls->Add(txtSession);
            this->Controls->Add(lblWorkoutPlan);
            this->Controls->Add(txtWorkoutPlan);
            this->Controls->Add(btnAssignWorkout);
            this->Controls->Add(workoutPlanDataGridView);
            this->Size = Drawing::Size(700, 400);
        }

        void btnAssignWorkout_Click(Object^ sender, EventArgs^ e)
        {
            String^ session = txtSession->Text->Trim();
            String^ workout = txtWorkoutPlan->Text->Trim();

            if (session != "" && workout != "")
            {
             
                workoutPlanDataGridView->Rows->Add(session, workout);

                
                std::string stdSession = msclr::interop::marshal_as<std::string>(session);
                std::string stdWorkout = msclr::interop::marshal_as<std::string>(workout);
                currentCoach->assignWorkoutPlan(stdSession, stdWorkout);

               
                txtSession->Clear();
                txtWorkoutPlan->Clear();
            }
            else
            {
                MessageBox::Show("Please enter both a session and a workout plan.", "Missing Info", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
        }

        void LoadWorkoutPlans()
        {
            workoutPlanDataGridView->Rows->Clear();
            const auto& plans = currentCoach->getWorkoutPlans();
            for (const auto& p : plans)
            {
                String^ sName = gcnew String(p.first.c_str());
                String^ plan = gcnew String(p.second.c_str());
                workoutPlanDataGridView->Rows->Add(sName, plan);
            }
        }
    };
}
