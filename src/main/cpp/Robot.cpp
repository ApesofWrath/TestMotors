#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {

  joyOp = new frc::Joystick(0);
  //talon1 = new TalonSRX(1);
  talon2 = new TalonFX(0);
}

void Robot::RobotPeriodic(){

}

void Robot::AutonomusInit() {}

void Robot::TeleopInit() {
}

void Robot::TeleopPeriodic(){
  spin = joyOp->GetRawButton(1);
  if(spin){
    talon1->Set(ControlMode::PercentOutput, 0.3);
    talon2->Set(ControlMode::PercentOutput, 0.3);
  } else{
    talon1->Set(ControlMode::PercentOutput, 0);
    talon2->Set(ControlMode::PercentOutput, 0);
  }

}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>();}
#endif
