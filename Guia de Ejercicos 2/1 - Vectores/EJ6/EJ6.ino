void setup() {
  Serial.begin(9600);
}

void loop() {
  int numeros[] = {2, 6, 10, 11};

  for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
    Serial.print("Multiplos de ");
    Serial.print(numeros[i]);
    Serial.print(": ");

    for (int j = 1; j <= 5; j++) {
      int multiplo = numeros[i] * j;
      Serial.print(multiplo);
      Serial.print(" ");
    }

    Serial.println();
  }

  delay(1000);
}