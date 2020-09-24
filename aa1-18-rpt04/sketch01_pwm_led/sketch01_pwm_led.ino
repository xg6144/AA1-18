int pwm = 0;
int pinNum = 3; //D13

void setup() {
  // put your setup code here, to run once:  
 
}

void loop() {
  // put your main code here, to run repeatedly:
    pwm = random(0,255);
    pwmLed(pinNum, pwm);
} 

void pwmLed(int pinNum, int pwmValue){
  analogWrite(pinNum, pwmValue);
  delay(10);
}
