int pwm = 0;
int pinNum = 3; //D13

void setup() {
  // put your setup code here, to run once:  
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    pwm = random(0,255);
    pwmLed(pinNum, pwm);

    Serial.print("AA08, AA18, LED: ");
    Serial.println(pwm);
    delay(10);
} 

void pwmLed(int pinNum, int pwmValue){
  analogWrite(pinNum, pwmValue);
  delay(10);
}
