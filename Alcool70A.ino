int Aplicacao = 125;
int Tempo1 = 50;
int Tempo2 = 250;
int Aguardar = 350;
int Distancia = 350;

void setup(){
pinMode(2, OUTPUT);
pinMode(5,INPUT_PULLUP);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,INPUT_PULLUP);
digitalWrite(2,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
Serial.begin(9600);
}

void loop() {

if (digitalRead(12) == 0){
  digitalWrite(10,HIGH);
}else{
    digitalWrite(10,HIGH);
}
if (digitalRead(5) == 0){
//if (analogRead(A0)<Distancia){
      delay(Aguardar);  
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
      delay(Aplicacao);  
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
      delay(Aguardar);  
      
      while(digitalRead(5) == 0){
//      while(analogRead(A0)<Distancia){
            digitalWrite(10,LOW);
            Alarme();
            }
   }else{
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
   }
Serial.print(analogRead(A0));
Serial.print(" - ");
Serial.print(digitalRead(12));
Serial.print(" - ");
Serial.println(digitalRead(5));
}
void Alarme(){
digitalWrite(9,HIGH);
digitalWrite(2,HIGH);
delay(Tempo1);
digitalWrite(9,LOW);
digitalWrite(2,LOW);
delay(Tempo1);
digitalWrite(9,HIGH);
digitalWrite(2,HIGH);
delay(Tempo1);
digitalWrite(9,LOW);
digitalWrite(2,LOW);
delay(Tempo1);
digitalWrite(9,HIGH);
digitalWrite(2,HIGH);
delay(Tempo1);
digitalWrite(9,LOW);
digitalWrite(2,LOW);
delay(Aguardar);
}
