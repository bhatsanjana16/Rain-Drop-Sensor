#define RAIN_ANALOG_PIN 35  // Use ADC1 pins (32, 33, 34, 35)
#define RAIN_DIGITAL_PIN 5 // Any GPIO for digital rain detection

void setup() {
  Serial.begin(115200);
  pinMode(RAIN_DIGITAL_PIN, INPUT);  // Digital rain detection
}

void loop() {
  int rainAnalog = analogRead(RAIN_ANALOG_PIN);  // Read rain intensity
  int rainDigital = digitalRead(RAIN_DIGITAL_PIN);  // 0 = Rain detected, 1 = No rain

  Serial.println("\n--- RAINDROP SENSOR READINGS ---");
  Serial.print("Analog Value (Rain Intensity): ");
  Serial.println(rainAnalog);
  
  Serial.print("Digital Value (Rain Detected): ");
  Serial.println(rainDigital == 0 ? "YES (Raining)" : "NO (Dry)");

  delay(1000);  // Read every second
}

