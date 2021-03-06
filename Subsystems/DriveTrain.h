/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../WPILibExtensions/WPILibExtensions.h"

class DriveTrain: public Subsystem {
private:
	bool mecanumOrTank;
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SmartCANJaguar* rightFront;
	SmartCANJaguar* rightBack;
	SmartCANJaguar* leftFront;
	SmartCANJaguar* leftBack;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DriveTrain();
	void InitDefaultCommand();
	void SetTankMode();
	void SetMecanumMode();
	bool IsMecanumMode();
	void MecanumDrive(float x, float y, float twist);
	void AracdeDrive(float left, float right);
};

#endif
