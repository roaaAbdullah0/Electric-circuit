// C++ code
//
#include <Servo.h>

int Value = 0;

int outputValue = 0;

Servo servo1,servo2,servo3,servo4,servo5;

void setup()
{
  pinMode(A0, INPUT);
  servo1.attach(3);

  pinMode(A1, INPUT);
  servo2.attach(5);

  pinMode(A2, INPUT);
  servo3.attach(6);

  pinMode(A3, INPUT);
  servo4.attach(9);

  pinMode(A4, INPUT);
  servo5.attach(10);

}

void loop()
{
  Value = analogRead(A0);
  outputValue = map(Value, 0, 1023, 0, 90);
  servo1.write(outputValue);
  Value = analogRead(A1);
  outputValue = map(Value, 0, 1023, 0, 90);
  servo2.write(outputValue);
  Value = analogRead(A2);
  outputValue = map(Value, 0, 1023, 0, 90);
  servo3.write(outputValue);
  Value = analogRead(A3);
  outputValue = map(Value, 0, 1023, 0, 90);
  servo4.write(outputValue);
  Value = analogRead(A4);
  outputValue = map(Value, 0, 1023, 0, 90);
  servo5.write(outputValue);
  delay(20); 
}