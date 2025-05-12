#pragma once
#include "BaseForm.h"
#include "Gym.h"
#include <iomanip>
#include <sstream>
#include <msclr/marshal_cppstd.h>

namespace gymproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for JoinClass
	/// </summary>
	public ref class JoinClass : public System::Windows::Forms::Form
	{
	private: Gym* gym;
	public:
		JoinClass(Gym* gym)
		{
			InitializeComponent();
			this->gym = gym;

			unordered_map<string, GymClass> gymClasses = gym->getGymClasses();
			int numLinesPerClass = 7;
			size_t numClasses = gymClasses.size();

			vector<vector<string>> allClassData;

			for (auto g : gymClasses) {
				allClassData.push_back(g.second.class_to_string());
			}
			for (int line = 0; line < numLinesPerClass; ++line) {
				string row = "";
				for (int cls = 0; cls < numClasses; ++cls) {
					if (line == 0) {
						comboBox1->Items->Add(gcnew String(allClassData[cls][line].substr(12, allClassData[cls][line].size()).c_str()));
					}
					if (line == 4 || line == 5) {
						row += allClassData[cls][line] + "\t";
					} 
					else if (line == 0 && allClassData[cls][line].size() >= 20) row += allClassData[cls][line] + "\t";
					else row += allClassData[cls][line] + "\t\t";
				}
				this->listBox1->Items->Add(gcnew String(row.c_str()));
			}

			this->WindowState = FormWindowState::Maximized;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->BackgroundImage = System::Drawing::Image::FromFile("background.jpg");
			this->BackgroundImageLayout = ImageLayout::Stretch;
			this->BackgroundImageLayout = ImageLayout::Center;
			this->BackgroundImageLayout = ImageLayout::Zoom;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		virtual bool ProcessCmdKey(Message% msg, Keys keyData) override {
			if (keyData == Keys::Escape) {
				Application::Exit(); // Cleanly closes the application
				return true;         // Block further processing of the key
			}
			return Form::ProcessCmdKey(msg, keyData);
		}
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JoinClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::Transparent;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Size = System::Drawing::Size(1448, 888);
			this->splitContainer1->SplitterDistance = 410;
			this->splitContainer1->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(0, 106);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1448, 304);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(609, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Avaliable Classes";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(558, 183);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(298, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(510, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Class";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(813, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(246, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &JoinClass::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(450, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &JoinClass::button1_Click);
			// 
			// JoinClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 888);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"JoinClass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"JoinClass";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
