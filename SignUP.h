#pragma once
#include <iostream>
#include "Trainee.h"
#include <map>
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>
using namespace std;
vector<Trainee*> traineeList;
namespace GymGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected: System::Windows::Forms::Label^ label7;
	private:
	private: System::Windows::Forms::Button^ btnSave;
	protected:
	protected: System::Windows::Forms::Label^ label6;
	private:
	private: System::Windows::Forms::DateTimePicker^ DOB;
	protected:
	private: System::Windows::Forms::RadioButton^ RadFemale;
	private: System::Windows::Forms::RadioButton^ RadMale;
	protected: System::Windows::Forms::Label^ label5;
	private:
	protected: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ cellPass;
	protected:
	protected: System::Windows::Forms::Label^ label3;
	private:
	private: System::Windows::Forms::TextBox^ cellEmail;
	protected:
	protected: System::Windows::Forms::Label^ label2;
	private:
	private: System::Windows::Forms::TextBox^ cellPhoneNum;
	protected:
	protected: System::Windows::Forms::Label^ label1;
	private:
	private: System::Windows::Forms::TextBox^ cellName;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->RadFemale = (gcnew System::Windows::Forms::RadioButton());
			this->RadMale = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cellPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cellEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cellPhoneNum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cellName = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(490, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(610, 710);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign Up";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->btnSave);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->DOB);
			this->groupBox2->Controls->Add(this->RadFemale);
			this->groupBox2->Controls->Add(this->RadMale);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->cellPass);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->cellEmail);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->cellPhoneNum);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->cellName);
			this->groupBox2->Location = System::Drawing::Point(1, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(608, 711);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sign Up";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(263, 529);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 16);
			this->label7->TabIndex = 14;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(244, 468);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(101, 31);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Sign Up";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &SignUp::btnSave_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(79, 363);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Date Of Birth";
			// 
			// DOB
			// 
			this->DOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOB->Location = System::Drawing::Point(79, 382);
			this->DOB->Name = L"DOB";
			this->DOB->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->DOB->Size = System::Drawing::Size(200, 22);
			this->DOB->TabIndex = 11;
			this->DOB->Value = System::DateTime(2025, 5, 4, 21, 46, 58, 0);
			// 
			// RadFemale
			// 
			this->RadFemale->AutoSize = true;
			this->RadFemale->Location = System::Drawing::Point(185, 322);
			this->RadFemale->Name = L"RadFemale";
			this->RadFemale->Size = System::Drawing::Size(74, 20);
			this->RadFemale->TabIndex = 10;
			this->RadFemale->Text = L"Female";
			this->RadFemale->UseVisualStyleBackColor = true;
			this->RadFemale->CheckedChanged += gcnew System::EventHandler(this, &SignUp::RadFemale_CheckedChanged);
			// 
			// RadMale
			// 
			this->RadMale->AutoSize = true;
			this->RadMale->Checked = true;
			this->RadMale->Location = System::Drawing::Point(82, 322);
			this->RadMale->Name = L"RadMale";
			this->RadMale->Size = System::Drawing::Size(58, 20);
			this->RadMale->TabIndex = 9;
			this->RadMale->TabStop = true;
			this->RadMale->Text = L"Male";
			this->RadMale->UseVisualStyleBackColor = true;
			this->RadMale->CheckedChanged += gcnew System::EventHandler(this, &SignUp::RadMale_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 291);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 234);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Password";
			// 
			// cellPass
			// 
			this->cellPass->Location = System::Drawing::Point(80, 253);
			this->cellPass->Margin = System::Windows::Forms::Padding(4);
			this->cellPass->Name = L"cellPass";
			this->cellPass->PasswordChar = '*';
			this->cellPass->Size = System::Drawing::Size(457, 22);
			this->cellPass->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 172);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Email";
			// 
			// cellEmail
			// 
			this->cellEmail->Location = System::Drawing::Point(81, 191);
			this->cellEmail->Margin = System::Windows::Forms::Padding(4);
			this->cellEmail->Name = L"cellEmail";
			this->cellEmail->Size = System::Drawing::Size(457, 22);
			this->cellEmail->TabIndex = 4;
			this->cellEmail->Text = L"Enter Your  Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(77, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Phone Number";
			// 
			// cellPhoneNum
			// 
			this->cellPhoneNum->Location = System::Drawing::Point(81, 130);
			this->cellPhoneNum->Margin = System::Windows::Forms::Padding(4);
			this->cellPhoneNum->Name = L"cellPhoneNum";
			this->cellPhoneNum->Size = System::Drawing::Size(457, 22);
			this->cellPhoneNum->TabIndex = 2;
			this->cellPhoneNum->Text = L"Enter Your Phone Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// cellName
			// 
			this->cellName->Location = System::Drawing::Point(81, 66);
			this->cellName->Margin = System::Windows::Forms::Padding(4);
			this->cellName->Name = L"cellName";
			this->cellName->Size = System::Drawing::Size(457, 22);
			this->cellName->TabIndex = 0;
			this->cellName->Text = L"Enter Your Name";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1033);
			this->Controls->Add(this->groupBox1);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		Trainee* trainee = new Trainee();
		// Ensure msclr::interop namespace is used correctly
		trainee->setName(msclr::interop::marshal_as<std::string>(cellName->Text));
		trainee->setPhone(msclr::interop::marshal_as<std::string>(cellPhoneNum->Text));
		trainee->setEmail(msclr::interop::marshal_as<std::string>(cellEmail->Text));
		trainee->setPassword(msclr::interop::marshal_as<std::string>(cellPass->Text));
		trainee->setDateOfBirth(msclr::interop::marshal_as<std::string>(DOB->Text));
		if (RadFemale->Checked)
		{
			trainee->setGender("female");
		}
		else if (RadMale->Checked)
			trainee->setGender("Male");
		this->label7->Text = "Your ID is " + trainee->getId();
		trainee->setGymOrPadel(true);
		trainee->setIsVIP(false);
		traineeList.push_back(trainee);
		trainee->~Trainee();
		trainee = nullptr;
		delete trainee;

	}
	private: System::Void RadFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RadFemale->Checked)
		{
			RadMale->Checked = false;
		}
		else
		{
			RadMale->Checked = true;
		}
	}
	private: System::Void RadMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
