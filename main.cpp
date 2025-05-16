#include "coachForm.h"
#include "Coatch1.h"
#include "ManagerTabs.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(//array<String^>^ args
)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create a test coach object (you must define this in your Coatch1 class)
    Coatch1* testCoach = new Coatch1("john", "1", "Test Coach", 1);

    // Launch the form
    Application::Run(gcnew ManagerForm());

    return 0;
}
