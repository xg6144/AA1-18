int pwm = 0;
int pwm1 = 0;
int pwm2 = 0;

int pinNum = 3;
int pinNum1 = 5;
int pinNum2 = 6;//D13

void setup() {
  // put your setup code here, to run once:  
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    pwm = random(0,255);
    pwmLed(pinNum, pwm);

    pwm1 = random(0,255);
    pwmLed(pinNum1, pwm1);

    pwm2 = random(0,255);
    pwmLed(pinNum2, pwm2);

    //Serial.print("AA08 AA18 LED_R: ");
    Serial.print(pwm);
    //Serial.print("LED_G : ");
    Serial.print(",");
    Serial.print(pwm1);
    //Serial.print("LED_Y : ");
    Serial.print(",");
    Serial.println(pwm2);
    delay(10);
} 

void pwmLed(int pinNum, int pwmValue){
  analogWrite(pinNum, pwmValue);
  delay(10);
}
