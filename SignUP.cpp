#include "SignUp.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace GymGUI;

[STAThread]
int main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew SignUp());

    return 0;
}