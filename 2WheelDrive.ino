char read;
int motor1p1=13;
int motor1p2=12;
int motor2p1=10;
int motor2p2=11;
void setup()
{
  pinMode( motor1p1, OUTPUT); //IN1
  pinMode( motor1p2, OUTPUT); //IN2
  pinMode( motor2p1, OUTPUT); //IN3
  pinMode( motor2p2, OUTPUT); //IN4
  Serial.begin(9600);
}

void loop()
{
  read=Serial.read(); //read stores keyboard input
  if (read=='w') //Forward
  {
    digitalWrite( motor1p1,HIGH); //Motor 1: Forward
    digitalWrite( motor1p2,LOW); 
    digitalWrite( motor2p1,HIGH); //Motor 2: Forward
    digitalWrite( motor2p2,LOW);
    delay(2000);
  }
  else if (read=='s') //backward
  {
    digitalWrite( motor1p1,LOW);  //Motor 1: Backward
    digitalWrite( motor1p2,HIGH); 
    digitalWrite( motor2p1,LOW);  //Motor 2: Backward
    digitalWrite( motor2p2,HIGH);
    delay(2000);
  }
  else if (read=='a') //Turn Right
  {
    digitalWrite( motor1p1,HIGH); //Motor 1: Forward
    digitalWrite( motor1p2,LOW);
    digitalWrite( motor2p1,LOW);  //Motor 2: stopped
    digitalWrite( motor2p2,LOW);
    delay(500);
    
  }
  else if (read=='d') //Turn Left
  {
    digitalWrite( motor1p1,LOW);  //Motor 1: Stopped
    digitalWrite( motor1p2,LOW);
    digitalWrite( motor2p1,HIGH); //Motor 2: Forward
    digitalWrite( motor2p2,LOW);
    delay(500);
  }
}