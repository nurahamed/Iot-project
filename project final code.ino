#include <ESP8266WiFi.h>
// connecting blynk
#define BLYNK_TEMPLATE_ID "TMPLjY9NPU3v"
#define BLYNK_DEVICE_NAME "servo control 1"
// Blynk Server connection 
#define BLYNK_AUTH_TOKEN    "rloZox5CazyTboZM1zT2mYeo0vykyNBO";
#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>

#define relay1 D1
#define relay2 D2


#include<Servo.h>
Servo servo;

// router id and password
char ssid [] = "JioFiber@4";
char pass [] = "Ik7y8fzvtz/%/#?#";
char auth[] = BLYNK_AUTH_TOKEN;

// servo motor
BLYNK_WRITE(V0){
  double s0 = param.asInt();
  servo.write(s0);
  Blynk.virtualWrite(V1, s0);
  }
// relay module 1
BLYNK_WRITE(V2){
  bool value1 = param.asInt();
  if (value1 == 1){
    digitalWrite(relay1, LOW);
    
  }else{
    digitalWrite(relay1, HIGH);
    }
}
// relay module 2
BLYNK_WRITE(V3){
  bool value1 = param.asInt();
  if (value1 == 1){
    digitalWrite(relay2, LOW);
    
  }else{
    digitalWrite(relay2, HIGH);
    }
}

void setup() {

  //SET THE NODE MCU PIN AS A OUTPUT PIN
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);

digitalWrite(relay1, HIGH);
digitalWrite(relay2, HIGH);

  // setup code here, to run once:
Serial.begin(9600);
servo.attach(D0);
Blynk.begin(auth, ssid, pass);
delay(2000);
}


void loop() {
  // main code here, to run repeatedly:
  Blynk.run();
}
