int rojo1 = 12;
int azul1 = 11;
int verde1 = 10;
int rojo2 = 9;
int azul2 = 8;
int verde2 = 7;
     
void setup()
{
  pinMode( rojo1, OUTPUT);
  pinMode( azul1, OUTPUT);
  pinMode( verde1, OUTPUT);
  pinMode( rojo2, OUTPUT);
  pinMode( azul2, OUTPUT);
  pinMode( verde2, OUTPUT);

}

void loop()
{
  digitalWrite( rojo1, HIGH );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

  
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, HIGH );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, HIGH );
  digitalWrite( verde1, HIGH );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

  
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, HIGH );
  digitalWrite( verde2, HIGH );
  delay( 1000 );

  
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, HIGH );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, HIGH );
  delay( 1000 );

 
  digitalWrite( rojo1, HIGH );
  digitalWrite( azul1, HIGH );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, HIGH );
  digitalWrite( azul2, HIGH );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, HIGH );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, HIGH );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, HIGH );
  digitalWrite( azul1, HIGH );
  digitalWrite( verde1, HIGH );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, HIGH );
  digitalWrite( azul2, HIGH );
  digitalWrite( verde2, HIGH );
  delay( 1000 );

  
  digitalWrite( rojo1, HIGH );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, HIGH );
  digitalWrite( rojo2, LOW );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, LOW );
  delay( 1000 );

 
  digitalWrite( rojo1, LOW );
  digitalWrite( azul1, LOW );
  digitalWrite( verde1, LOW );
  digitalWrite( rojo2, HIGH );
  digitalWrite( azul2, LOW );
  digitalWrite( verde2, HIGH );
  delay( 1000 );

}