#pragma once

namespace GymGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
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
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	protected: System::Windows::Forms::Label^ label7;
	private:
	private: System::Windows::Forms::Button^ btnSave;
	protected:

	private:

	protected:



	private:
	protected: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ cellPass;
	protected:
	protected: System::Windows::Forms::Label^ label3;
	private:
	private: System::Windows::Forms::TextBox^ cellEmail;
	protected:

	private:

	protected:

	private:

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cellPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cellEmail = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
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
			this->btnSave->Location = System::Drawing::Point(266, 364);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(101, 31);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Log In";
			this->btnSave->UseVisualStyleBackColor = true;
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
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Email / ID";
			// 
			// cellEmail
			// 
			this->cellEmail->Location = System::Drawing::Point(81, 191);
			this->cellEmail->Margin = System::Windows::Forms::Padding(4);
			this->cellEmail->Name = L"cellEmail";
			this->cellEmail->Size = System::Drawing::Size(457, 22);
			this->cellEmail->TabIndex = 4;
			this->cellEmail->Text = L"Enter Your  Email /ID";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(526, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(610, 516);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign Up";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->btnSave);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->cellPass);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->cellEmail);
			this->groupBox2->Location = System::Drawing::Point(1, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(608, 537);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login";
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1033);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LogIn";
			this->Text = L"LogIn";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
