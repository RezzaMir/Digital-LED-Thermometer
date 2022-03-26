void setup() {
  // put your setup code here, to run once:
  int value = analogRead (A0)
  analogReference(External)
  pinMode(clockpin,OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(power, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  //shiftOut(datapin, clockpin, MSBFIRST, 0b00000000);
}

void loop() {
  // put your main code here, to run repeatedly:
Leds[9]= (0, 1, 3, 7, 15, 31, 63, 127, 255)
w = digitalRead(9);
x = digitalRead(10);
y = digitalRead(11);
z = digitalRead(12);
if (value > 487)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[8]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 487)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[7]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 475)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[6]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 462)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[5]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 450)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[4]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 437)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[3]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 425)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[2]);
    digitalWrite(7,HIGH);
 }
  else if (ADC <= 412)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[1]);
    digitalWrite(7,HIGH);
 }
  else (ADC <= 400)
 {
    digitalWrite(7,LOW);
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[0]);
    digitalWrite(7,HIGH);
 }
 delay(100);
}
