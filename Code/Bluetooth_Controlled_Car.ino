/*
---------------------------------------------------------
Project: Bluetooth Controlled Robotic Car
Author : Tamminana Manasa
Board  : Arduino UNO

Components:
- Arduino UNO
- HC-05 Bluetooth Module
- L298N Motor Driver
- 2 DC Motors

Bluetooth Commands:
F - Forward
B - Backward
L - Left
R - Right
S - Stop
---------------------------------------------------------
*/

// Motor A
const int ENA = 5;
const int IN1 = 8;
const int IN2 = 9;

// Motor B
const int ENB = 6;
const int IN3 = 10;
const int IN4 = 11;

char command;

void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 200);
  analogWrite(ENB, 200);

  Serial.begin(9600);

  stopCar();
}

void loop()
{
  if (Serial.available())
  {
    command = Serial.read();

    switch (command)
    {
      case 'F':
        moveForward();
        break;

      case 'B':
        moveBackward();
        break;

      case 'L':
        turnLeft();
        break;

      case 'R':
        turnRight();
        break;

      case 'S':
        stopCar();
        break;
    }
  }
}

void moveForward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
