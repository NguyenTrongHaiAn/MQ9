#define analogpin A0
#define buzzer 2 
#define DOUT 8
void setup() 

{
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(DOUT,PUT);
}
 
void loop() 
{
  int limit = digitalRead(DOUT);
  float sensor_volt; 
  float sensorValue;
  sensorValue = analogRead(analogpin);
  sensor_volt = sensorValue/1024*5.0;
  Serial.print("sensor_volt = ");
  Serial.print(sensor_volt);
  Serial.println("V");
  delay(1000);
  
  if (limit == HIGH) {
    digitalWrite(BUZZER, HIGH); // Nếu vượt ngưỡng, bật buzzer
  } else {
    digitalWrite(BUZZER, LOW);  // Nếu không vượt ngưỡng, tắt buzzer
  }
}
