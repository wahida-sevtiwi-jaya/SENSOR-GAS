#include <LiquidCrystal.h>
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //pin LCD

int redLed1 = 13;
int greenLed1 = 12;
int redLed2 = 11;
int greenLed2 = 10;
int redLed3 = 9;
int greenLed3 = 8;
int smokeA0 = A0;
int smokeA1 = A1;
int smokeA2 = A2;

// Your threshold value
void setup() {
pinMode(redLed1, OUTPUT);
pinMode(greenLed1, OUTPUT);
pinMode(redLed2, OUTPUT);
pinMode(greenLed2, OUTPUT);
pinMode(redLed3, OUTPUT);
pinMode(greenLed3, OUTPUT);
pinMode(smokeA0, INPUT);
pinMode(smokeA1, INPUT);
pinMode(smokeA2, INPUT);
Serial.begin(9600);
lcd.begin(16, 2);
}

void loop() {
Serial.print("Pembacaan Sensor Gas 1: ");
lcd.setCursor(0, 0); 
lcd.print("Pembacaan");
lcd.setCursor(0, 1); 
lcd.print("Sensor Gas 1:");
delay (500);
lcd.clear();
// Checks if it has reached the threshold value
if (digitalRead(smokeA0)==HIGH) 
{
digitalWrite(redLed1, HIGH);
digitalWrite(greenLed1, LOW);
Serial.println("Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Ada Gas");
lcd.setCursor(0, 1); 
lcd.print("Terdeteksi");
delay (500);
lcd.clear();
}
else
{
digitalWrite(redLed1, LOW);
digitalWrite(greenLed1, HIGH);
Serial.println("Tidak Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Tidak Ada");
lcd.setCursor(0, 1); 
lcd.print("Gas Terdeteksi");
delay (500);
lcd.clear();
}
Serial.print("Pembacaan Sensor Gas 2: ");
lcd.setCursor(0, 0); 
lcd.print("Pembacaan");
lcd.setCursor(0, 1); 
lcd.print("Sensor Gas 2:");
delay (500);
lcd.clear();
if (digitalRead(smokeA1)==HIGH) 
{
digitalWrite(redLed2, HIGH);
digitalWrite(greenLed2, LOW);
Serial.println("Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Ada Gas");
lcd.setCursor(0, 1); 
lcd.print("Terdeksi");
delay (500);
lcd.clear();
}
else
{
digitalWrite(redLed2, LOW);
digitalWrite(greenLed2, HIGH);
Serial.println("Tidak Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Tidak Ada");
lcd.setCursor(0, 1); 
lcd.print("Gas Terdeteksi");
delay (500);
lcd.clear();
}
Serial.print("Pembacaan Sensor Gas 3: ");
lcd.setCursor(0, 0); 
lcd.print("Pembacaan");
lcd.setCursor(0, 1); 
lcd.print("Sensor Gas 3:");
delay (500);
lcd.clear();
if (digitalRead(smokeA2)==HIGH) 
{
digitalWrite(redLed3, HIGH);
digitalWrite(greenLed3, LOW);
Serial.println("Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Ada Gas");
lcd.setCursor(0, 1); 
lcd.print("Terdeksi");
delay (500);
lcd.clear();
}
else
{
digitalWrite(redLed3, LOW);
digitalWrite(greenLed3, HIGH);
Serial.println("Tidak Ada Gas Terdeteksi");
lcd.setCursor(0, 0); 
lcd.print("Tidak Ada");
lcd.setCursor(0, 1); 
lcd.print("Gas Terdeteksi");
delay (500);
lcd.clear();
}
delay(100); 
}
