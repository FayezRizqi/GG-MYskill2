int buttonPin= 12;

void setup{
    pinMode(buttonPin,INPUT);
}

void loop{
  if (digitalRead(buttonPin) == HIGH) { // Jika button ditekan
    digitalWrite(LED1_PIN, HIGH); // Nyalakan LED 1
    digitalWrite(LED2_PIN, HIGH); // Nyalakan LED 2
  } else { // Jika button tidak ditekan
    digitalWrite(LED1_PIN, LOW); // Matikan LED 1
    digitalWrite(LED2_PIN, LOW); // Matikan LED 2
 }
}