void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int value = Serial.read();
    if(value == '1') digitalWrite(LED_BUILTIN,HIGH);
    if(value == '0') digitalWrite(LED_BUILTIN,LOW);  
  }

}
