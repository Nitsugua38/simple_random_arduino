/* Code by Nitsugua38*/

/*Déf des variables sur leur port*/
  int trig = 6;
  int echo = 7;
  int tic = 8;
  int bip = 9;
  long lecture_echo;
  long cm;
  void initLed(){
  for( int i=2;i<6;++i){
  pinMode(i,OUTPUT);
  digitalWrite(1,LOW);
  }
}

/*Déf Allumer-Éteindre*/
void LedOn(int i){
  digitalWrite(i,HIGH);
}
void LedOff(int i){
  digitalWrite(i,LOW);
}

/*SETUP*/
void setup() {
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT);
  pinMode(tic,OUTPUT);
  pinMode(bip,OUTPUT);
  Serial.begin(9600);
  Serial.println("Nitsugua38");
}

/*TOUJOURS*/
void loop() {
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
lecture_echo = pulseIn(echo,HIGH);
cm = lecture_echo /58;
Serial.print("Distance en cm :");
Serial.println(cm);

if(cm<20)
{
  LedOn(2);
  delay(1000);
  LedOff(2);
  digitalWrite(bip,HIGH);
  delay(1000);
  digitalWrite(bip,LOW);

}

if((cm>19) && (cm<40))
{
  LedOn(3);
  delay(1000);
  LedOff(3);
  digitalWrite(bip,HIGH);
  delay(500);
  digitalWrite(bip,LOW);
  delay(500);
  digitalWrite(bip,HIGH);
  delay(500);
  digitalWrite(bip,LOW);
}

if((cm>39) && (cm<60))
{
  LedOn(4);
  delay(1000);
  LedOff(4);
  digitalWrite(tic,HIGH);
  delay(500);
  digitalWrite(tic,LOW);
}

if(cm>59)
{
  LedOn(5);
  delay(1000);
  LedOff(5);
  digitalWrite(tic,HIGH);
  delay(500);
  digitalWrite(tic,LOW);
  delay(500);
  digitalWrite(tic,HIGH);
  delay(500);
  digitalWrite(tic,LOW);
}

delay(2000);
}
