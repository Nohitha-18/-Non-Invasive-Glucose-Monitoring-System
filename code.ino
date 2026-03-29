#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// values through regression 
float m = 85.2;
float c = 12.7;

// LCD setup (I2C address 0x27, 16x2 display)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Sensor pin
int irsensorpin = A0;

void setup() {
  Serial.begin(9600);     // For Serial Monitor (debugging)
  Serial1.begin(9600);    // For Bluetooth communication

  lcd.init();             // Initialize LCD
  lcd.backlight();        // Turn on backlight

  // Welcome message
  lcd.setCursor(0, 0);
  lcd.print("IR Glucometer");
  delay(1500);
  lcd.clear();
}

void loop() {

  // Step 1: Read sensor value (0–1023)
  int rawvalue = analogRead(irsensorpin);

  // Step 2: Convert to voltage (0–5V)
  float voltage = (rawvalue * 5.0) / 1023.0;

  // Step 3: Apply calibration equation
  float glucose = (m * voltage) + c;

  // Step 4: Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Glucose:");
  lcd.setCursor(0, 1);
  lcd.print(glucose, 1);   // 1 decimal place
  lcd.print(" mg/dL");

  // Step 5: Send via Bluetooth
  Serial1.print("Glucose: ");
  Serial1.print(glucose, 1);
  Serial1.println(" mg/dL");

  // Step 6: Debug output (optional)
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V  | Glucose: ");
  Serial.print(glucose);
  Serial.println(" mg/dL");

  delay(1000);  // 1 second delay
}
