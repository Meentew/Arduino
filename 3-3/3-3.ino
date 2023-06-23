
int R = D1;
int G = D2;
int B = D3;
int buttonPin1 = D8;
int buttonPin2 = D7;
int buttonPin3 = D6;
int buttonPin4 = D5;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  Serial.begin(9600);
  //pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  Serial.print("1 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(buttonState1);
   buttonState2 = digitalRead(buttonPin2);
  Serial.print("2 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(buttonState2);
   buttonState3 = digitalRead(buttonPin3);
  Serial.print("3 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(buttonState3);
   buttonState4 = digitalRead(buttonPin4);
  Serial.print("4 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(buttonState4);
  if (buttonState1 == 0) {
    analogWrite(R, 124);
    analogWrite(G, 0);
    analogWrite(B, 0);
  }
  if (buttonState2 == 0) {
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 125);
  }
  if (buttonState3 == 0) {
    analogWrite(R, 0);
    analogWrite(G, 125);
    analogWrite(B, 0);
  }
  if (buttonState4 == 0) {
    analogWrite(R, 255);
    analogWrite(G, 255);
    analogWrite(B, 255);
  }
  else{
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);

  }
}
