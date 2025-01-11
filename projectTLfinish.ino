
int g1=13, g2=12, g3=14, Y1=27, y2=26, y3=25, r1=33, r2=32, r3=19, buz=23;
int jarak1 = 10, trig1=15, ech1=2;
int jarak2 = 10, trig2=18, ech2=5;
int jarak3 = 10, trig3=18, ech3=5;;
long duration1, distance1;
long duration2, distance2;
long duration3, distance3;

void setup() {
  Serial.begin(9600);
  pinMode(g1, OUTPUT); pinMode(Y1, OUTPUT); pinMode(r1, OUTPUT);
  pinMode(g2, OUTPUT); pinMode(y2, OUTPUT); pinMode(r2, OUTPUT);
  pinMode(g3, OUTPUT); pinMode(y3, OUTPUT); pinMode(r3, OUTPUT);
  pinMode(buz,OUTPUT);
  pinMode(trig1,OUTPUT); pinMode(ech1,INPUT);
  pinMode(trig2,OUTPUT); pinMode(ech2,INPUT);
}

void loop() {
    int simpang1 = (Y1&&r1&&g2&&y2&&g3&&y3);
    digitalWrite(simpang1,0);
    digitalWrite(y3,1); digitalWrite(r3,0);
    delay(1000);
    digitalWrite(y3,0); digitalWrite(r3,1);
    digitalWrite(g3,0); digitalWrite(r1,0);
    digitalWrite(Y1,1);
    delay(1000);
    digitalWrite(Y1,0);
    digitalWrite(g1,1); digitalWrite(r2,1);
    for (int i = 0; i<50;i++){
      sensor2();
      sensor3();
      if(distance2<=30 || distance3<=30){
        digitalWrite(buz,1);
      }
      else{
        digitalWrite(buz,0);
      }
      delay(100);
    }


    int simpang2 = (y2&&r2&&g3&&y3&&g1&&Y1);
    digitalWrite(simpang2,0);
    digitalWrite(Y1,1); digitalWrite(r1,0);
    delay(1000);
    digitalWrite(Y1,0); digitalWrite(r1,1);
    digitalWrite(g1,0); digitalWrite(r2,0);
    digitalWrite(y2,1);
    delay(1000);
    digitalWrite(y2,0);
    digitalWrite(g2,1); digitalWrite(r3,1);
    for (int i = 0; i<50;i++){
      sensor1();
      sensor3();
      if(distance1<=30 || distance3<=30){
        digitalWrite(buz,1);
      }
      else{
        digitalWrite(buz,0);
      }
      delay(100);
    }


    int simpang3 = (y3&&r3&&g1&&Y1&&g2&&y2);
    digitalWrite(simpang3,0);
    digitalWrite(y2,1); digitalWrite(r2,0);
    delay(1000);
    digitalWrite(y2,0); digitalWrite(r2,1);
    digitalWrite(g2,0); digitalWrite(r3,0);
    digitalWrite(y3,1);
    delay(1000);
    digitalWrite(y3,0);
    digitalWrite(g3,1); digitalWrite(r1,1);
    for (int i = 0; i<50;i++){
      sensor2();
      sensor1();
      if(distance2<=30 || distance1<=30){
        digitalWrite(buz,1);
      }
      else{
        digitalWrite(buz,0);
      }
      delay(100);
    }
}

void sensor1(){
  digitalWrite(trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  duration1 = pulseIn(ech1, HIGH);
  distance1 = (duration1 * 0.0343) / 2;
  Serial.println(distance1);
}
void sensor2(){
  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration2 = pulseIn(ech2, HIGH);
  distance2 = (duration2 * 0.0343) / 2;
  Serial.println(distance2);
}
void sensor3(){
  digitalWrite(trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(trig3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig3, LOW);
  duration3 = pulseIn(ech3, HIGH);
  distance3 = (duration3 * 0.0343) / 2;
  Serial.println(distance3);
}