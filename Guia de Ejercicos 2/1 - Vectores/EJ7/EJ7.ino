const int numLEDs = 5;
int LEDs[numLEDs] = {2, 3, 4, 5, 6};
void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(LEDs[i], OUTPUT);
  }
}

void loop() {
  int vectorEscalera[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(LEDs[vectorEscalera[i] - 1], HIGH);

    delay(200);

    digitalWrite(LEDs[vectorEscalera[i] - 1], LOW);
  }
}
