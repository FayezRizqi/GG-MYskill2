const int ledPin2 = 6;

void setup (){
    pinMode (ledPin2, OUTPUT);
    

}

void loop (){
    digitalWrite (ledPin2, HIGH);// jika button ditekan maka lampu hidup
    digitalWrite (ledPin2, LOW);//jika button tidak ditekan maka lampu mati
    
    
}