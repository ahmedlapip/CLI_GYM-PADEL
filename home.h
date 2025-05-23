﻿#pragma once
#include <iostream>
#include <Windows.h>
#using <System.Windows.Forms.dll>
#include <unordered_map>
#include "coatch1.h"
#include "GymClass.h"
using namespace System;
using namespace System::Windows::Forms;

namespace Gym {
    public ref class Home : public System::Windows::Forms::UserControl
    {
    private:
        Coatch1* currentCoach;

    public:
        Home(Coatch1* coach)  
        {
            currentCoach = coach;
            InitializeComponent();
            loadSessions();
        }

    private:
        void loadSessions()
        {
            lblToday->Text = "Today's Sessions - " + DateTime::Now.ToString("D");

            sessionDataGridView->Rows->Clear();

            list<GymClass> classes = currentCoach->getClassAssignments();
            for (const GymClass& gymClass : classes)
            {
                sessionDataGridView->Rows->Add(
                    gcnew String(gymClass.getStartTime().c_str()),
                    gcnew String(gymClass.getName().c_str()),
                    gcnew String(gymClass.getTimePeriod().c_str())
                );
            }
        }

    protected:
        ~Home()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::DataGridView^ sessionDataGridView;
        System::Windows::Forms::Label^ lblToday;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->sessionDataGridView = (gcnew System::Windows::Forms::DataGridView());
            this->lblToday = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sessionDataGridView))->BeginInit();
            this->SuspendLayout();

            
            this->sessionDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->sessionDataGridView->Location = System::Drawing::Point(20, 70);
            this->sessionDataGridView->Name = L"sessionDataGridView";
            this->sessionDataGridView->Size = System::Drawing::Size(540, 200);
            this->sessionDataGridView->TabIndex = 0;
            this->sessionDataGridView->ReadOnly = true;
            this->sessionDataGridView->AllowUserToAddRows = false;
            this->sessionDataGridView->AllowUserToDeleteRows = false;
            this->sessionDataGridView->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
            this->sessionDataGridView->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;

            this->sessionDataGridView->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);
            this->sessionDataGridView->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);

            this->sessionDataGridView->Columns->Add("Time", "Time");
            this->sessionDataGridView->Columns->Add("Session", "Session Name");
            this->sessionDataGridView->Columns->Add("Duration", "Duration");

            
            this->lblToday->AutoSize = true;
            this->lblToday->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
            this->lblToday->Location = System::Drawing::Point(20, 20);
            this->lblToday->Name = L"lblToday";
            this->lblToday->Size = System::Drawing::Size(200, 22);
            this->lblToday->TabIndex = 1;
            this->lblToday->Text = L"Today's Sessions";

             
            this->Controls->Add(this->lblToday);
            this->Controls->Add(this->sessionDataGridView);
            this->Name = L"Home";
            this->Size = System::Drawing::Size(600, 300);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sessionDataGridView))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
    };
}
