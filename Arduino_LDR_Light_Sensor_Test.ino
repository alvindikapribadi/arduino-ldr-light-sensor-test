/*
  =================================================
  Title       : Arduino LDR Light Sensor Test
  Description : Read light intensity using an LDR
                (Light Dependent Resistor) with a
                33K Ohm resistor in voltage divider
                configuration. The analog value is
                displayed in Serial Monitor.
  
  Components  :
  - Arduino Uno
  - LDR (Light Dependent Resistor)
  - 33K Ohm Resistor
  - Breadboard
  - Jumper Wires
  
  Wiring :
  5V -> LDR -> A0 -> 33K Resistor -> GND
  
  Notes :
  33K resistor provides wider and clearer
  light-to-dark reading range.
  =================================================
*/

const int ldrPin = A0;
int ldrValue = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino LDR Light Sensor Test (33K Resistor)");
  Serial.println("Cover the LDR or shine a light to see changes");
  Serial.println("---------------------------------------------");
}

void loop() {

  ldrValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(ldrValue);

  delay(300);
}
