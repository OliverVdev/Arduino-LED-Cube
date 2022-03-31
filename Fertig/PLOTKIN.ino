//Initialisierung und deklarierung der LED Reihen
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4};
//Initialisierung und deklarierung der LED Spalten
  int layer[4]={A3,A2,A1,A0};

  int time = 250;

void setup()
{
  //setting rows to ouput
  for(int i = 0; i<16; i++)
  {
    pinMode(column[i], OUTPUT);
  }
  //setting layers to output
  for(int i = 0; i<4; i++)
  {
    pinMode(layer[i], OUTPUT);
  }
}

void loop()
{
  turnAllOff();
  delay(2000);
  plotkinP();
  turnAllOff();
  delay(2000);
  plotkinL();
  turnAllOff();
  delay(2000);
  plotkinO();
  turnAllOff();
  delay(2000);
  plotkinT();
  turnAllOff();
  delay(2000);
  plotkinK();
  turnAllOff();
  delay(2000);
  plotkinI();
  turnAllOff();
  delay(2000);
  plotkinN();
}
//Alle LEDs ausstellen
void turnAllOff()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 1);
  }
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 0);
  }
}

void turnColumnsOff()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 1);
  }
}

//#######################################################
//Das P aus "Plotkin"
//#######################################################
void plotkinP()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[4], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das L aus "Plotkin"
//#######################################################
void plotkinL()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das O aus "Plotkin"
//#######################################################
void plotkinO()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[9], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das T aus "Plotkin"
//#######################################################
void plotkinT()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
      
      digitalWrite(layer[y-1], 1);
      
      turnColumnsOff();
      digitalWrite(column[7], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[2], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das K aus "Plotkin"
//#######################################################
void plotkinK()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das I aus "Plotkin"
//#######################################################
void plotkinI()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[7], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      delay(x);
    }
  }
}

//#######################################################
//Das N aus "Plotkin"
//#######################################################
void plotkinN()
{
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
     //turn on layer
      digitalWrite(layer[y-1], 1);
     //d3
      turnColumnsOff();
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[1], 0);
      digitalWrite(column[0], 0);
      digitalWrite(column[14], 0);
      digitalWrite(column[15], 0);
      delay(x);
    }
  }
}
