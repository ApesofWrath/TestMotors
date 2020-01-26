
/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <frc/TimedRobot.h>
#include <ctre/Phoenix.h>
#include <frc/Joystick.h>


class Robot : public frc::TimedRobot {

public:

    void RobotInit();

    void RobotPeriodic();

    void AutonomusInit();

    void TeleopInit();

    void TeleopPeriodic();

    void TestPeriodic();

    TalonSRX *talon1;
    TalonFX *talon2;
    frc::Joystick *joyOp;
    bool spin;

private:

};
#endif
