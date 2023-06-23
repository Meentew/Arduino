int R = D1;
int G = D2;
int B = D3;
int analogPin1 =A0; 
int val1 = 0;
int analogPin2 =D6; 
int val2 = 0;
int analogPin3 =D8; 
int val3 = 0;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);
}
void loop() {
// กำหนด LED ดับ
val1 = analogRead(analogPin1);  //อ่านค่าสัญญาณ analog ขา5 เว็บไว้ในตัวแปร val
  Serial.print("val1 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val1); // พิมพ์ค่าของตัวแปร val
  analogWrite(R, val1 / 4); // ส่งค่าสัญญาณ analog ไปควบคุมความสว่างหลอดไฟ LED
  delay(5);
val2 = analogRead(analogPin2);  //อ่านค่าสัญญาณ analog ขา5 เว็บไว้ในตัวแปร val
  Serial.print("val2 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val2); // พิมพ์ค่าของตัวแปร val
  analogWrite(G, val2 / 4); // ส่งค่าสัญญาณ analog ไปควบคุมความสว่างหลอดไฟ LED
  delay(5);
  val3 = analogRead(analogPin3);  //อ่านค่าสัญญาณ analog ขา5 เว็บไว้ในตัวแปร val
  Serial.print("val2 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val3); // พิมพ์ค่าของตัวแปร val
  analogWrite(B, val3 / 4); // ส่งค่าสัญญาณ analog ไปควบคุมความสว่างหลอดไฟ LED
  delay(5);
//analogWrite(R, 0);
//analogWrite(G, 0);
//analogWrite(B, 0);
}