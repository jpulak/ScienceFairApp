Arduino Programming: Moisture Sensor, Water Pump, and 5V Relay Communication

int ACWATERPUMP = 13; //water pump
int sensor = 8; //sensor 1
int sensor2 = 9; //sensor 2
int val; //var stores received value from Soil moisture sensor
int val2; //var stores received value from Soil moisture sensor
void setup() {
  pinMode(13, OUTPUT); //Set pin 13 as OUTPUT pin, send signal to relay
  pinMode(8, INPUT); //Set pin 8 as input pin, receive data from Soil moisture sensor
  pinMode(9, INPUT); //Set pin 9 as input pin, receive data from Soil moisture sensor
}

void loop() {
  val = digitalRead(8); //Read data from Soil moisture sensor

  if (val == HIGH) 
  {
    digitalWrite(13, HIGH); 
    delay(400);
  }
  val2 = digitalRead(9); //Read data from Soil moisture sensor

  if (val2 == LOW) 
  {
    digitalWrite(13, LOW); 
    delay(400);
    if (val2 == HIGH)
    {
      digitalWrite(13, LOW);
      delay(400);
    }

  }
  delay(400); // wait for few seconds and then continue loop
}
