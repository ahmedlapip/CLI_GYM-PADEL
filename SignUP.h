#pragma once

namespace GYMPadelGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUP
	/// </summary>
	public ref class SignUP : public System::Windows::Forms::Form
	{
	public:
		SignUP(void)
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
		~SignUP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected: System::Windows::Forms::Label^ label1;
	private:
	private: System::Windows::Forms::TextBox^ textBox1;
	protected: System::Windows::Forms::Label^ label2;
	private:
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	protected:
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUP::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(345, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(456, 578);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign Up";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &SignUP::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter Your Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &SignUP::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &SignUP::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(61, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(344, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Enter Your Name";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &SignUP::textBox2_TextChanged);
			// 
			// SignUP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1445, 668);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SignUP";
			this->Text = L"SignUP";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &SignUP::SignUP_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SignUP_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
