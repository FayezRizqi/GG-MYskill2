const int ledPin1 = 5

    void setup() {
    pinMode(ledPin1, OUTPUT);
}


void loop()
{
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
}