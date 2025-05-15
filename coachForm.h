#include"home.h"
#include"Addsessions.h"
#include"plan.h"
#include"Coatch1.h"

public ref class coachtabs : public UserControl
{
private:
    Coatch1* currentCoach;  

public:
    coachtabs(Coatch1* coach)
    {
        currentCoach = coach;  
        InitializeComponent();
    }

private:
    TabControl^ tabControl;
    TabPage^ tabHome;
    TabPage^ tabAddSession;
    TabPage^ tabWorkout;
    Home^ homeTab;
    AddSession^ addSessionTab;
    WorkoutPlan^ workoutPlanTab;

    void InitializeComponent()
    {
        this->tabControl = gcnew TabControl();
        this->tabHome = gcnew TabPage("Home");
        this->tabAddSession = gcnew TabPage("Add Session");
        this->tabWorkout = gcnew TabPage("Workout Plan");

        this->homeTab = gcnew Home(currentCoach); 
        this->addSessionTab = gcnew AddSession(currentCoach);  
        this->workoutPlanTab = gcnew WorkoutPlan(currentCoach);

        this->tabControl->Dock = DockStyle::Fill;
        this->tabControl->Alignment = TabAlignment::Left;
        this->tabControl->SizeMode = TabSizeMode::Fixed;
        this->tabControl->ItemSize = System::Drawing::Size(40, 120);
        this->tabControl->Multiline = true;

        this->tabHome->Controls->Add(this->homeTab);
        this->tabAddSession->Controls->Add(this->addSessionTab);
        this->tabWorkout->Controls->Add(this->workoutPlanTab);

        this->tabControl->Controls->Add(this->tabHome);
        this->tabControl->Controls->Add(this->tabAddSession);
        this->tabControl->Controls->Add(this->tabWorkout);

        this->Controls->Add(this->tabControl);

        this->Size = System::Drawing::Size(800, 500);
    }
};
