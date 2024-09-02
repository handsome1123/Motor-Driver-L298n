// Define motor control pins
#define EN_A 9  // PWM pin to control Motor A speed
#define EN_B 10 // PWM pin to control Motor B speed
#define IN1 7   // Motor A direction pin 1
#define IN2 6   // Motor A direction pin 2
#define IN3 5   // Motor B direction pin 1
#define IN4 4   // Motor B direction pin 2

void setup() {
  // Set all the motor control pins as outputs
  pinMode(EN_A, OUTPUT);
  pinMode(EN_B, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Initial motor stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  // Move forward
  digitalWrite(IN1, HIGH); // Motor A forward
  digitalWrite(IN2, LOW);  // Motor A backward (off)
  digitalWrite(IN3, HIGH); // Motor B forward
  digitalWrite(IN4, LOW);  // Motor B backward (off)
  analogWrite(EN_A, 255);  // Full speed for Motor A
  analogWrite(EN_B, 255);  // Full speed for Motor B
  delay(2000);             // Move forward for 2 seconds

  // Stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);             // Stop for 1 second

  // Move backward
  digitalWrite(IN1, LOW);  // Motor A forward (off)
  digitalWrite(IN2, HIGH); // Motor A backward
  digitalWrite(IN3, LOW);  // Motor B forward (off)
  digitalWrite(IN4, HIGH); // Motor B backward
  analogWrite(EN_A, 255);  // Full speed for Motor A
  analogWrite(EN_B, 255);  // Full speed for Motor B
  delay(2000);             // Move backward for 2 seconds

  // Stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);             // Stop for 1 second
}
