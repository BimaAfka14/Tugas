/*START AUTENTIFKIASI BLYNK, TEMPL ID,DEV NAME,AUTH TOKEN*/
#define BLYNK_TEMPLATE_ID "TMPLbAEap_Ik"
#define BLYNK_DEVICE_NAME "CEMAS KAU DEK"
#define BLYNK_AUTH_TOKEN "qO5z_RWkK5_Q3xrKdWrAkbIeLjMTpaYr"
#define BLYNK_PRINT Serial

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "WIFI NAME";
char pass[] = "WIFI PASSWORD";
/*END AUTENTIFKIASI BLYNK*/

/*KAMUS LIBRARY ESP8266 WIFI, BLYNK, LCD I2C*/
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <Servo.h>
/*END KAMUS LIBRARY ESP8266 WIFI, BLYNK, LCD I2C*/

/*MENDEFINISKAN PIN SENSOR ULTRASONIK DAN INFRARED PADA ESP8266*/
#define trigPin D4
#define echoPin D3
#define ir_car1 A0
/*END MENDEFINISKAN PIN SENSOR ULTRASONIK DAN INFRARED PADA ESP8266*/

int S1;
int button;
Servo servo;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ir_car1, INPUT);
  
  servo.attach(D8); //PIN OUTPUT SERVO PADA ESP8266 ADALAH PADA D8
  

  /* Starter pack menghidupkan lcd i2c pada esp8266*/
  lcd.backlight(); 
  lcd.begin(16,2);
  lcd.init();

  Blynk.begin(auth, ssid, pass);

}

void Read_Sensor(){
  S1=0;
  if(analogRead(ir_car1) <= 500){
    S1=1;
  } 
}

void loop() {   
//  lcd.setCursor(0, 0);
//  lcd.print("SLOT : ");
//  lcd.setCursor(8, 0);
//  lcd.print(slot);
  Read_Sensor();

  /*INI DIMANA KETIKA SENSOR IR MENDETEKSI ADA OBJEK DIDEPANNYA MAKA AKAN KE KONDISI S1==1 / S1 TERISI*/
  if (S1==1) { 
    Serial.println("s1 = terisi ");
    lcd.setCursor(0, 1);
    lcd.print("Slot 1 : Fill  ");
  }else if(S1==0){
    Serial.println("s1 = kosong ");
    lcd.setCursor(0, 1);
    lcd.print("Slot 1 : Empty");
  }

  /*fungsi blynk run*/
  Blynk.run();

  /* fungsi dasar untuk berfungsinya sensor ultrasonic */
  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  
  if (distance < 10 || button == 1 ) {
    Serial.println("Pintu terbuka");
    lcd.setCursor(0, 0);      
    lcd.print("Pintu terbuka  ");
    
    servo.write(0);
    delay(1500);
  }
  else {
    lcd.setCursor(0, 0);  
    Serial.println("Pintu tertutup");    
    lcd.print("Pintu tertutup");
    servo.write(180);
    
  }
  

  
  delay(500);
  

}
   
BLYNK_WRITE(V1) // this command is listening when something is written to V1
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  long distance;
  
  if (pinValue == 1){
    
      button = 1;
    
    pinValue = 0; 
   // do something when button is pressed;
  } else if (pinValue == 0) {
    button = 0;
   // do something when button is released;
  }
  
  Serial.print("V1 status: "); // printing value to serial monitor
  Serial.println(pinValue);
}
