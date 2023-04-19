const int ledPin1 = 5;
const int ledPin2 = 6;
const int buttonPin1= 12;

void setup (){
    Serial.begin (9600);
    pinMode (ledPin2, OUTPUT);
    pinMode(ledPin1, OUTPUT);
    pinMode(buttonPin1,INPUT);
}

void loop() {
    if (digitalRead(buttonPin1) == HIGH) { // Jika button ditekan
    digitalWrite(ledPin1, HIGH); // Nyalakan LED 1
    digitalWrite (ledPin2, HIGH); // Nyalakan LED 2
  } else { // Jika button tidak ditekan
    digitalWrite(ledPin1, LOW); // Matikan LED 1
    digitalWrite (ledPin2, LOW); // Matikan LED 2
 }
   
    
}