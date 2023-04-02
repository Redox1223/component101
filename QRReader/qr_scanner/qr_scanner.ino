// Include necessary libraries
#include <SoftwareSerial.h> // for software serial communication
#include <Adafruit_SoftServo.h> // for controlling servos
#include <Adafruit_GFX.h> // for graphics on OLED display
#include <Adafruit_SSD1306.h> // for OLED display
#include <QRCode.h> // for reading QR codes

// Define pin for OLED reset
#define OLED_RESET 4
// Create instance of Adafruit SSD1306 for OLED display
Adafruit_SSD1306 display(OLED_RESET);

// Define pin for QR code reader
const int qr_pin = 2;
// Create instance of QRCode for reading QR codes
QRCode qr(qr_pin);

// Setup function - runs once at the beginning
void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Initialize QRCode reader
  qr.begin();
  // Initialize OLED display
  display.begin(SSD1306_SWITCHCAPVCC, 128, 32);
  // Clear OLED display
  display.clearDisplay();
}

// Loop function - runs repeatedly
void loop() {
  // Read QR code
  qr.read();
  // Check if QR code is available
  if (qr.available()) {
    // Get data from QR code
    String data = qr.getData();
    // Print data to serial monitor
    Serial.println(data);
    // Clear OLED display
    display.clearDisplay();
    // Set text size and color for OLED display
    display.setTextSize(1);
    display.setTextColor(WHITE);
    // Set cursor position for OLED display
    display.setCursor(0,0);
    // Print data to OLED display
    display.println(data);
    // Update OLED display
    display.display();
  }
}
