
// Define pin numbers
const int ldrPin = 34;  // Analog pin connected to LDR (GPIO34)
const int ledPin = 23;  // Digital pin connected to LED (GPIO23)

// Define threshold for light level
const int lightThreshold = 2000;  // Adjust based on your needs

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  // Initialize serial communication for debugging
  Serial.begin(115200);
}

void loop() {
  // Read the light level from LDR
  int lightLevel = analogRead(ldrPin);

  // Print the light level to serial monitor for debugging
  Serial.print("Light Level: ");
  Serial.print(lightLevel);
  
  // Control the LED based on the light level
  if (lightLevel < lightThreshold) {
    // If the light level is below the threshold, turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // If the light level is above the threshold, turn the LED off
    digitalWrite(ledPin, LOW);
  }

  // Small delay for a second to stabilize the readings
  delay(1000);
}
