const int Led_pin = 13;
int Input = A0;
const int MAX_8_INT = 255;
int brightness  = 0;
int fade_amount = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReadResolution(12);
  analogWriteResolution(8);
}

void loop() {
  // put your main code here, to run repeatedly:
int PWM_Input = analogRead(Input) <<4 ;
Serial.print(Input);
analogWrite(Led_pin ,PWM_Input);
//brightness = brightness + fade_amount;
//if (brightness == 0 or brightness == MAX_8_INT){
//  fade_amount = -fade_amount;
//}
//delay(100);
}
