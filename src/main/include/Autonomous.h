//Author 3229 Programming Subteam


#ifndef AUTONOMOUS_H
#define AUTONOMOUS_H

//Replaces (cout), see Debug.h
#include "Debug.h"

//stabdard c++ includes
#include <iostream>
#include "string"
#include <stdio.h>


//FRC Defined basic includes
#include "frc/WPILib.h"
#include "frc/smartdashboard/Smartdashboard.h"
#include "frc/smartdashboard/SendableChooser.h"

//Programming specific defined includes
#include "DriveSystem.h"
#include "CaptureReplay.h"

class Autonomus
{

private: 

    DriveSystem * DriveSystem;

    //Driver Station chossing

   // frc::SendableCooser<int> * routineChooser; 

    enum commands {drive, done };

    struct cmd { 
        double data; 
        double xbox1_leftY; 
        double xbox1_leftx;
        double xbox_rightx;
        bool xbox1_Abutton; 
        bool xbox1_Bbutton;
        bool xbox1_Xbutton;
        bool xbox1_Ybutton;
        bool xbox1_kRightHandBumper; 
        bool xbox1_kLeftHandBumper; 
        double xbox2_lefttY; 
        double xbox2_RightY; 
        bool xbox1_kRightHandTrigger; 
        bool xbox1_kLeftHandTrigger; 
    }; 

    cmd autocommand [5000];
    int number_cmds = 0;



    //cmd autocommand < still looking over

    public:
    
  

    //Autonomus(DriveSystem * Intake);
    //~Autonomous();
    void AutoInit(std::string colors);
    void ReadStation();
    void AutoPeriodic();
    void AddOptions();
    void SetupAutoCommands();






};

#endif //AUTONOMOUS_H