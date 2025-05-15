#pragma once
#include <iostream>
#include <Windows.h>
#using <System.Windows.Forms.dll>
#include "coatch1.h"
#include "GymClass.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

namespace Gym {

    public ref class AddSession : public System::Windows::Forms::UserControl
    {
    private:
        Coatch1* currentCoach;

    public:
        AddSession(Coatch1* coach)
        {
            currentCoach = coach;
            InitializeComponent();
        }

    private:
        Label^ lblName;
        TextBox^ txtName;
        Label^ lblDuration;
        TextBox^ txtDuration;
        Label^ lblTime;
        DateTimePicker^ timePicker;
        Button^ btnAdd;
        DataGridView^ dgvSessions;

        void InitializeComponent()
        {
            lblName = gcnew Label();
            txtName = gcnew TextBox();
            lblDuration = gcnew Label();
            txtDuration = gcnew TextBox();
            lblTime = gcnew Label();
            timePicker = gcnew DateTimePicker();
            btnAdd = gcnew Button();
            dgvSessions = gcnew DataGridView();

            lblName->Text = "Session Name:";
            lblName->Location = Drawing::Point(20, 20);
            lblName->Size = Drawing::Size(100, 20);

            txtName->Location = Drawing::Point(130, 20);
            txtName->Size = Drawing::Size(200, 20);

            lblDuration->Text = "Duration:";
            lblDuration->Location = Drawing::Point(20, 60);
            lblDuration->Size = Drawing::Size(100, 20);

            txtDuration->Location = Drawing::Point(130, 60);
            txtDuration->Size = Drawing::Size(200, 20);

            lblTime->Text = "Start Time:";
            lblTime->Location = Drawing::Point(20, 100);
            lblTime->Size = Drawing::Size(100, 20);

            timePicker->Format = DateTimePickerFormat::Time;
            timePicker->ShowUpDown = true;
            timePicker->Location = Drawing::Point(130, 100);
            timePicker->Size = Drawing::Size(200, 20);

            btnAdd->Text = "Add Session";
            btnAdd->Location = Drawing::Point(130, 140);
            btnAdd->Click += gcnew EventHandler(this, &AddSession::btnAdd_Click);

            dgvSessions->Location = Drawing::Point(20, 180);
            dgvSessions->Size = Drawing::Size(540, 150);
            dgvSessions->ColumnCount = 3;
            dgvSessions->Columns[0]->Name = "Session Name";
            dgvSessions->Columns[1]->Name = "Start Time";
            dgvSessions->Columns[2]->Name = "Duration";
            dgvSessions->ReadOnly = true;
            dgvSessions->AllowUserToAddRows = false;
            dgvSessions->AllowUserToDeleteRows = false;
            dgvSessions->SelectionMode = DataGridViewSelectionMode::FullRowSelect;

            this->Controls->Add(lblName);
            this->Controls->Add(txtName);
            this->Controls->Add(lblDuration);
            this->Controls->Add(txtDuration);
            this->Controls->Add(lblTime);
            this->Controls->Add(timePicker);
            this->Controls->Add(btnAdd);
            this->Controls->Add(dgvSessions);
            this->Size = Drawing::Size(600, 350);
        }

        void btnAdd_Click(Object^ sender, EventArgs^ e)
        {
            using namespace msclr::interop;
            std::string name = marshal_as<std::string>(txtName->Text);
            std::string duration = marshal_as<std::string>(txtDuration->Text);
            std::string startTime = marshal_as<std::string>(timePicker->Value.ToString("HH:mm"));
            // Name , Capacity, Start Time, End Time, Period,Number of Sessions ->month

            GymClass * GymClass= new GymClass(name, startTime, duration);
            currentCoach->addClass(newClass);

            dgvSessions->Rows->Add(
                gcnew String(name.c_str()),
                gcnew String(startTime.c_str()),
                gcnew String(duration.c_str())
            );

            MessageBox::Show("Session added!");
        }
    };
}
