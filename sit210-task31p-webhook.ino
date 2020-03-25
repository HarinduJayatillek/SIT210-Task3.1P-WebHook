int led = D7;  // The on-board LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   // Turn ON the LED

  String temperature = String(random(60, 80));
  Particle.publish("temp", temperature, PRIVATE);
  delay(30000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(30000);               // Wait for 30 seconds
}