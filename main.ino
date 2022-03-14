int motorPin = 2;
int togglePin = 1;
void setup() {
// put your setup code here, to run once:
    pinMode(motorPin, OUTPUT);
    pinMode(togglePin, INPUT);
    if (digitalRead(togglePin) == HIGH){
        //start workout indicator - vibrate for 5 seconds
        digitalWrite(motorPin, HIGH);
        delay(5000);
        digitalWrite(motorPin, LOW);
        delay(1000);
        for(int i=0; i<16; i++){
            //start of new interval indicator - 3 x 1 second vibrations
            digitalWrite(motorPin, HIGH);
            delay(1000);
            digitalWrite(motorPin, LOW);
            delay(1000);
            digitalWrite(motorPin, HIGH);
            delay(1000);
            digitalWrite(motorPin, LOW);
            delay(1000);
            digitalWrite(motorPin, HIGH);
            delay(1000);
            //1 minute long interval 
            digitalWrite(motorPin, LOW);
            delay(60000);
        }
        //end workout indicator - vibrate for 5 seconds 
        digitalWrite(motorPin, HIGH);
        delay(5000);
        digitalWrite(motorPin, LOW);
    } else {
    digitalWrite(motorPin, LOW);
    }
}

void loop() {
    // put your main code here, to run repeatedly:
    
}
