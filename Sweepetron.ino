#include <Motor_Shield.h> //Include motor shield lib into Arduino lib for motor related function
DCMotor Amotor(1); // Creating instances for Motor 1
DCMotor Bmotor(2); // Creating instances for Motor 2
DCMotor Cmotor(3); // Creating instances for Motor 1
DCMotor Dmotor(4);
void setup() 
{
Serial.begin(9600);
}
void loop()
{
   if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'F': Forward();break; 
        case 'B': Backward();break; 
        case 'L': Left();break; 
        case 'R': Right();break; 
        case 'P': (Pick);break; 
        case 'Q': (Place);break; 
        case 'H': (Hold);break; 
        case 'K': (Release);break; 
        case 'S': Stop();break;
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
  }
void Forward(void) //Forward Function
{
Amotor.run(FORWARD);
Bmotor.run(FORWARD);
Amotor.setSpeed(250);
Bmotor.setSpeed(250);
}
void Backward(void) //Backword Function
{
Amotor.run(BACKWARD);
Bmotor.run(BACKWARD);
Amotor.setSpeed(250);
Bmotor.setSpeed(250);
}
void Left(void) //Turn Left Function
{
Amotor.run(BACKWARD);
Bmotor.run(FORWARD);
Amotor.setSpeed(255);
Bmotor.setSpeed(255);
}
void Right(void) //Turn Right Function
{
Amotor.run(FORWARD);
Bmotor.run(BACKWARD);
Amotor.setSpeed(250);
Bmotor.setSpeed(250);
}
void Pick(unsigned char Speed) //Forward Function
{
Cmotor.run(FORWARD);
Dmotor.run(BACKWARD);
Cmotor.setSpeed(Speed);
Dmotor.setSpeed(Speed);
}
void Place(unsigned char Speed) //Forward Function
{
Cmotor.run(BACKWARD);
Dmotor.run(FORWARD);
Cmotor.setSpeed(Speed);
Dmotor.setSpeed(Speed);
}
void Hold(void) //Turn Left Function
{
Cmotor.run(FORWARD);
Dmotor.run(BACKWARD);
Cmotor.setSpeed(255);
Dmotor.setSpeed(255);
}
void Release(void) //Turn Right Function
{
Cmotor.run(BACKWARD);
Dmotor.run(FORWARD);
Cmotor.setSpeed(200);
Dmotor.setSpeed(200);
}
void Stop(void) //All motors stop to stop the robot.
{
Amotor.setSpeed(0);
Bmotor.setSpeed(0);
Cmotor.setSpeed(0);
Dmotor.setSpeed(0);
}
