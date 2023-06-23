int R = D1;
int G = D2;
int B = D3;
int analogPin1 =A0; 
int val1 = 0;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);
}

void loop() {
  val1 = analogRead(analogPin1);  //อ่านค่าสัญญาณ analog ขา5 เว็บไว้ในตัวแปร val
  Serial.print("val1 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val1); // พิมพ์ค่าของตัวแปร val
  analogWrite(R, val1 / 4); // ส่งค่าสัญญาณ analog ไปควบคุมความสว่างหลอดไฟ LED
  delay(5);
}
