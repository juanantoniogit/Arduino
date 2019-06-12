#include <DHT11.h>
#include <LiquidCrystal_I2C.h>
int pin=4;
DHT11 dht11(pin); 
LiquidCrystal_I2C lcd(0x27,20,4);

void setup()
{
   lcd.init();  
   lcd.backlight();
     lcd.setCursor(0,0);
  //lcd.print("Hello, world!");

   
   Serial.begin(9600);
  while (!Serial) {
      ; // wait for serial port to connect. Needed for Leonardo only
    }
}

void loop()
{


  
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  {
    Serial.print("temperature:");
    Serial.print(temp);
    Serial.print(" humidity:");
    Serial.print(humi);
    Serial.println();
  }
  else
  {
    Serial.println();
    Serial.print("Error No :");
    Serial.print(err);
    Serial.println();    
  }
  delay(DHT11_RETRY_DELAY); //delay for reread


  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.setCursor(6,0);
  lcd.print(temp);


  lcd.setCursor(0,1);
  lcd.print("Hum: ");
  lcd.setCursor(6,1);
  lcd.print(humi);
}


