#include "JoinClass.h"

#include "Home.h"
using namespace msclr::interop;

namespace gymproject {
	System::Void JoinClass::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Home^ nextForm = gcnew Home(this->gym);
		nextForm->StartPosition = FormStartPosition::Manual;
		nextForm->Location = this->Location;
		nextForm->Size = this->Size;
		nextForm->Show();
		this->Hide();
	}
	System::Void JoinClass::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string className = marshal_as<string>(comboBox1->SelectedItem->ToString());;
		unordered_map<string, GymClass> gymClasses = gym->getGymClasses();
		auto it = gymClasses.find(className);
		if (it != gymClasses.end()) {
			//add trainee to class
			MessageBox::Show("You have successfully joined the class: " + gcnew String(className.c_str()));
		}
		else {
			MessageBox::Show("Class not found!");
		}
	}
}