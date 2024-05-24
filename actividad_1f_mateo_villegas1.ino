bool BOTON;
  
void setup()
{
  pinMode(8 , INPUT);
  pinMode(6 , OUTPUT);
  pinMode(7 , OUTPUT);

}

void loop()
{
  
  if(digitalRead(8) == !HIGH){
    (BOTON == HIGH);
    digitalWrite( 6 , HIGH);
    delay(1000);
    digitalWrite( 6 , LOW);
    delay(1000);
    digitalWrite(7 , HIGH);
    delay(1000);
    digitalWrite( 7 ,LOW);
  }
  else{
    digitalWrite( 6 , LOW);
    digitalWrite( 7 , LOW);
}
}