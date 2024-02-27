#include <SoftwareSerial.h>  // Include the SoftwareSerial library for serial communication on other digital pins

#define LORA_TX   18         // TX pin is connected to Arduino pin 18
#define LORA_RX   19         // RX pin is connected to Arduino pin 19

// Initialize software serial
SoftwareSerial LoRaSerial(LORA_RX, LORA_TX); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // Set the data rate for the SoftwareSerial port
  LoRaSerial.begin(115200);
  Serial.println("Sending Scuffed Payload");
}

void loop() { // run over and over
  Serial.println("Sending 'Thoughts and Prayers'...");
  LoRaSerial.println("XxMeowxX uWu");  // Send a message
  delay(5000);  // Wait for 5 seconds
}
