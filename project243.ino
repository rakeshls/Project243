int delayseconds=200;
int pins[5]={32,33,25,26,27};
int i,j
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<5;i++){
    pinMode(pins[i],OUTPUT);
  }
delay(200)
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<5;i++){
    digitalWrite(pins[i],HIGH)
    delay(delayseconds)
    digitalWrite(pins[i],LOW)
    delay(delayseconds)
  }
  for(j=3;j>=0;j--){
    digitalWrite(pins[j],HIGH)
    delay(delayseconds)
    digitalWrite(pins[j],LOW)
    delay(delayseconds)
  }

}
