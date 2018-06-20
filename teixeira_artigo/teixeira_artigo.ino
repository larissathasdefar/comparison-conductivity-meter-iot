float cond = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float val = analogRead(A0);
  float rc = 0.8;
  float resistencia = (rc * 1024.0) / float(val) - rc;
  float cond = (1/resistencia) * 1000;

      Serial.print("Cond: ");
      Serial.print(cond, 4);
      Serial.print(" mS cm");
      Serial.print(" | Resistência: ");
      Serial.print(resistencia);
      Serial.println(" ");

      delay(2000);
}
