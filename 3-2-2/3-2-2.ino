int R = D2;
int G = D3;
int B = D4;
int analogPin = A0; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);

}

void loop() {
   val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog ขา5 ที่ต่อกับ LDR
  Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val); // พิมพ์ค่าของตัวแปร val
  if(val>800 ){
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
  }
  if(val>600 && val<=700){
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 0);
  }
  if(val<500 ){
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
  }
  else{
analogWrite(B, 0);
analogWrite(R, 0);
analogWrite(G, 0);
  }

}
