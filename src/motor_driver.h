/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 41
  #define LEFT_MOTOR_BACKWARD  45
  #define RIGHT_MOTOR_FORWARD  43
  #define LEFT_MOTOR_FORWARD   47
  #define RIGHT_MOTOR_ENABLE 5
  #define LEFT_MOTOR_ENABLE 6
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
