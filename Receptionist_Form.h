#pragma once
#include <iostream>
#include "Add_Session.h"
#include "SignUp.h"
#include<map>
#include <unordered_map>
//#include "System.h"
#include "Trainee.h"
using namespace std;



namespace GYM_Padel_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Receptionist_Form
	/// </summary>
	public ref class Receptionist_Form : public System::Windows::Forms::Form
	{
	public:
		Receptionist_Form(void)
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
		~Receptionist_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ sign_up_bt;
	private: System::Windows::Forms::TextBox^ id_txt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ search_bt;
	private: System::Windows::Forms::Button^ view_bt;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dob_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ password_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vip_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sub_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender_col;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sign_up_bt = (gcnew System::Windows::Forms::Button());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->search_bt = (gcnew System::Windows::Forms::Button());
			this->view_bt = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dob_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vip_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sub_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(419, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Receptionist";
			// 
			// sign_up_bt
			// 
			this->sign_up_bt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sign_up_bt->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign_up_bt->Location = System::Drawing::Point(25, 482);
			this->sign_up_bt->Name = L"sign_up_bt";
			this->sign_up_bt->Size = System::Drawing::Size(250, 87);
			this->sign_up_bt->TabIndex = 1;
			this->sign_up_bt->Text = L"sign up a new trainee";
			this->sign_up_bt->UseVisualStyleBackColor = true;
			this->sign_up_bt->Click += gcnew System::EventHandler(this, &Receptionist_Form::sign_up_bt_Click);
			// 
			// id_txt
			// 
			this->id_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->id_txt->Location = System::Drawing::Point(300, 547);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(246, 22);
			this->id_txt->TabIndex = 2;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &Receptionist_Form::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(300, 498);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"search by ID";
			// 
			// search_bt
			// 
			this->search_bt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->search_bt->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_bt->Location = System::Drawing::Point(572, 535);
			this->search_bt->Name = L"search_bt";
			this->search_bt->Size = System::Drawing::Size(242, 40);
			this->search_bt->TabIndex = 4;
			this->search_bt->Text = L"search";
			this->search_bt->UseVisualStyleBackColor = true;
			this->search_bt->Click += gcnew System::EventHandler(this, &Receptionist_Form::search_bt_Click);
			// 
			// view_bt
			// 
			this->view_bt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->view_bt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->view_bt->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_bt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->view_bt->Location = System::Drawing::Point(829, 535);
			this->view_bt->Name = L"view_bt";
			this->view_bt->Size = System::Drawing::Size(242, 39);
			this->view_bt->TabIndex = 5;
			this->view_bt->Text = L"View All";
			this->view_bt->UseVisualStyleBackColor = false;
			this->view_bt->Click += gcnew System::EventHandler(this, &Receptionist_Form::view_bt_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DarkBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->id_col,
					this->name_col, this->phone_col, this->dob_col, this->email_col, this->password_col, this->vip_col, this->sub_col, this->gender_col
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1187, 309);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Receptionist_Form::dataGridView1_CellContentClick);
			// 
			// id_col
			// 
			this->id_col->HeaderText = L"ID";
			this->id_col->MinimumWidth = 6;
			this->id_col->Name = L"id_col";
			this->id_col->Width = 125;
			// 
			// name_col
			// 
			this->name_col->HeaderText = L"NAME";
			this->name_col->MinimumWidth = 6;
			this->name_col->Name = L"name_col";
			this->name_col->Width = 125;
			// 
			// phone_col
			// 
			this->phone_col->HeaderText = L"PHONE";
			this->phone_col->MinimumWidth = 6;
			this->phone_col->Name = L"phone_col";
			this->phone_col->Width = 125;
			// 
			// dob_col
			// 
			this->dob_col->HeaderText = L"DOB";
			this->dob_col->MinimumWidth = 6;
			this->dob_col->Name = L"dob_col";
			this->dob_col->Width = 125;
			// 
			// email_col
			// 
			this->email_col->HeaderText = L"EMAIL";
			this->email_col->MinimumWidth = 6;
			this->email_col->Name = L"email_col";
			this->email_col->Width = 125;
			// 
			// password_col
			// 
			this->password_col->HeaderText = L"PASSWORD";
			this->password_col->MinimumWidth = 6;
			this->password_col->Name = L"password_col";
			this->password_col->Width = 125;
			// 
			// vip_col
			// 
			this->vip_col->HeaderText = L"VIP";
			this->vip_col->MinimumWidth = 6;
			this->vip_col->Name = L"vip_col";
			this->vip_col->Width = 125;
			// 
			// sub_col
			// 
			this->sub_col->HeaderText = L"SUBISCRIPTION";
			this->sub_col->MinimumWidth = 6;
			this->sub_col->Name = L"sub_col";
			this->sub_col->Width = 125;
			// 
			// gender_col
			// 
			this->gender_col->HeaderText = L"GENDER";
			this->gender_col->MinimumWidth = 6;
			this->gender_col->Name = L"gender_col";
			this->gender_col->Width = 125;
			// 
			// Receptionist_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1211, 589);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->view_bt);
			this->Controls->Add(this->search_bt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->sign_up_bt);
			this->Controls->Add(this->label1);
			this->Name = L"Receptionist_Form";
			this->Text = L"Receptionist_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		 
		




	}
private: System::Void sign_up_bt_Click(System::Object^ sender, System::EventArgs^ e) {

	//Add_Session obj;
	//obj.ShowDialog();
}

private: System::Void search_bt_Click(System::Object^ sender, System::EventArgs^ e) {

	int id = Convert::ToInt32(id_txt->Text);
	unordered_map<int, Trainee> traineeList = system->traineeList;

	if (traineeList.find(id) != traineeList.end()) {
		Trainee t = traineeList[id];
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(gcnew String(to_string(t.getId()).c_str()),
			gcnew String(t.getName().c_str()),
			gcnew String(t.getPhone().c_str()),
			gcnew String(t.getDateOfBirth().c_str()),
			gcnew String(t.getEmail().c_str()),
			gcnew String(t.getPassword().c_str()),
			t.getIsVIP() ? "Yes" : "No",
			gcnew String(t.getSubscription().getStartDate().c_str()),
			gcnew String(t.getGender().c_str()));
	}
	else {
		MessageBox::Show("Trainee not found.");
	}





}
private: System::Void view_bt_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->Rows->Clear();
	for (auto& pair : system->traineeList) {
		Trainee t = pair.second;
		dataGridView1->Rows->Add(gcnew String(to_string(t.getId()).c_str()),
			gcnew String(t.getName().c_str()),
			gcnew String(t.getPhone().c_str()),
			gcnew String(t.getDateOfBirth().c_str()),
			gcnew String(t.getEmail().c_str()),
			gcnew String(t.getPassword().c_str()),
			t.getIsVIP() ? "Yes" : "No",
			gcnew String(t.getSubscription().getStartDate().c_str()),
			gcnew String(t.getGender().c_str()));
	}



}
	   private: System::Void Receptionist_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		   dataGridView1->AlternatingRowsDefaultCellStyle->BackColor = Color::LightGray;
		   dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::DarkBlue;
		   dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;
		   dataGridView1->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Segoe UI", 10, FontStyle::Bold);
		   dataGridView1->EnableHeadersVisualStyles = false;
		   dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font("Segoe UI", 10);
		   dataGridView1->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		   dataGridView1->GridColor = Color::DarkGray;
		   dataGridView1->RowHeadersVisible = false;
		   dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	   }
};
}
