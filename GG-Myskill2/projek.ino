const int ledPin1 = 5;
const int ledPin2 = 6;

void setup (){
    pinMode (ledPin2, OUTPUT);
    pinMode(ledPin1, OUTPUT);
}


void loop() {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite (ledPin2, HIGH);
    digitalWrite (ledPin2, LOW);
    
}