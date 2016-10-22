int enA = 10;
int in1 = 8;
int in2 = 9;

int enB = 11;
int in3 = 12;
int in4 = 13;
void setup() 
{
  // put your setup code here, to run once:


pinMode(enA, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);

pinMode(enB, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

void LeftMotorForwards()
{
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   analogWrite(enB, 230);

}

void LeftMotorBackwards()
{
   //Here, you don't have to connect IN4 because you're only using IN3.

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
}



void RightMotorForwards()
{
 //Here, you don't have to connect IN1 because you're only using IN2.
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   analogWrite(enA, 255);

}
void RightMotorBackwards()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
}



void loop() 
{
  // put your main code here, to run repeatedly:

LeftMotorForwards();
RightMotorForwards();

delay(1000);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
delay(1000);
//note: this doesn't actually work for some reason; the motors keep spinning forwards. 
LeftMotorBackwards();
RightMotorBackwards();



}
