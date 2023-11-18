#define LED_1 2
#define LED_2 3
#define LED_3 4
#define LED_4 5
#define LED_5 6
#define sensorPin A0

bool ledPin1Status;
bool ledPin2Status;
bool ledPin3Status;
bool ledPin4Status;
bool ledPin5Status;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 200)
    ledPin1Status = 1;
  if (sensorValue > 250)
    ledPin2Status = 1;
  if (sensorValue > 300)
    ledPin3Status = 1;
  if (sensorValue > 350)
    ledPin4Status = 1;
  if (sensorValue > 400)
    ledPin5Status = 1;

  if (ledPin1Status == 1 || ledPin2Status == 1 || ledPin3Status == 1 || ledPin4Status == 1 || ledPin5Status == 1) {
    if (sensorValue > 50 && sensorValue < 400)
      digitalWrite(LED_1, HIGH);
    if (sensorValue > 100 && sensorValue < 400)
      digitalWrite(LED_2, HIGH);
    if (sensorValue > 200 && sensorValue < 400)
      digitalWrite(LED_3, HIGH);
    if (sensorValue > 300 && sensorValue < 400)
      digitalWrite(LED_4, HIGH);
    if (sensorValue > 450 && sensorValue > 400) {
      digitalWrite(LED_5, HIGH);
      analogWrite(LED_1, 255);  // Set led brightness to maximum and turn on all leds at the same time when reached maximum pitch.
      analogWrite(LED_2, 255);
      analogWrite(LED_3, 255);
      analogWrite(LED_4, 255);
      analogWrite(LED_5, 255);
    }

    delay(200);

    ledPin5Status = 0;
    ledPin4Status = 0;
    ledPin3Status = 0;
    ledPin2Status = 0;
    ledPin1Status = 0;
  }

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
}

:)
