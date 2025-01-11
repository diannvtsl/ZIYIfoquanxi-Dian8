void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
 digitalWrite(19, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(13, HIGH);
 delay(5000);
 digitalWrite(19, LOW);
 digitalWrite(4, LOW);
 digitalWrite(13, LOW);
 //1

 digitalWrite(14, HIGH);
 digitalWrite(18, HIGH);
 digitalWrite(4, HIGH);
 delay(5000);
 digitalWrite(14, LOW);
 digitalWrite(18, LOW);
 digitalWrite(4, LOW);
 //2

 digitalWrite(14, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(4, HIGH);
 delay(5000);
 digitalWrite(14, LOW);
 digitalWrite(5, LOW);
 digitalWrite(4, LOW);
 //3
 
 digitalWrite(14, HIGH);
 digitalWrite(19, HIGH);
 digitalWrite(2, HIGH);
 delay(5000);
 digitalWrite(15, LOW);
  digitalWrite(19, LOW);
 digitalWrite(2, LOW);
//4
 
 digitalWrite(14, HIGH);
 digitalWrite(19, HIGH);
 digitalWrite(15, HIGH);
 delay(5000);
 digitalWrite(14, LOW);
  digitalWrite(19, LOW);
 digitalWrite(15, LOW);
 //5

 digitalWrite(12, HIGH);
 digitalWrite(19, HIGH);
 digitalWrite(4, HIGH);
 delay(5000);
 digitalWrite(12, LOW);
  digitalWrite(19, LOW);
 digitalWrite(4, LOW);
 //6

 digitalWrite(13, HIGH);
 digitalWrite(19, HIGH);
 digitalWrite(4, HIGH);
 delay(5000);
 digitalWrite(13, LOW);
  digitalWrite(19, LOW);
 digitalWrite(4, LOW);
 //7


  
 
}