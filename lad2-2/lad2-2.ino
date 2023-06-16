
int lok[]={16,5,4,0,2};
void setup() {
pinMode (lok[0], OUTPUT);
pinMode (lok[1], OUTPUT);
pinMode (lok[2], OUTPUT);
pinMode (lok[3], OUTPUT);
pinMode (lok[4], OUTPUT);
}
void loop() {
  for(int i=0; i<=3;i++){
  digitalWrite(lok[i], 1);
  delay(500);
  digitalWrite(lok[i], 0);
  delay(500);

  }
  digitalWrite(lok[4], 1);
  delay(500);
  digitalWrite(lok[4], 0);
  
}
