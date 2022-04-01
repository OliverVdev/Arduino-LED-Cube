///=============/// SETUP BEREICH BEREICH ///=============///

//initializing and declaring led rows
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4};
//initializing and declaring led layers
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
  //seeding random for random pattern
  randomSeed(analogRead(10));
}


///=============/// LOOP BEREICH ///=============///

void loop(){
  turnAllOff();
  delay(2000);
  LetterA();

  turnAllOff();
  delay(2000);
  LetterB();

  turnAllOff();
  delay(2000);
  LetterC();

  turnAllOff();
  delay(2000);
  LetterD();

  turnAllOff();
  delay(2000);
  LetterE();

  turnAllOff();
  delay(2000);
  LetterF();

  turnAllOff();
  delay(2000);
  LetterG();

  turnAllOff();
  delay(2000);
  LetterH();

  turnAllOff();
  delay(2000);
  LetterI();

  turnAllOff();
  delay(2000);
  LetterJ();

  turnAllOff();
  delay(2000);
  LetterK();

  turnAllOff();
  delay(2000);
  LetterL();

  turnAllOff();
  delay(2000);
  LetterM();

  turnAllOff();
  delay(2000);
  LetterN();

  turnAllOff();
  delay(2000);
  LetterO();

  turnAllOff();
  delay(2000);
  LetterP();
  
  turnAllOff();
  delay(2000);
  LetterQ();

  turnAllOff();
  delay(2000);
  LetterR();

  turnAllOff();
  delay(2000);
  LetterS();

  turnAllOff();
  delay(2000);
  LetterT();

  turnAllOff();
  delay(2000);
  LetterU();

  turnAllOff();
  delay(2000);
  LetterV();

  turnAllOff();
  delay(2000);
  LetterW();

  turnAllOff();
  delay(2000);
  LetterX();

  turnAllOff();
  delay(2000);
  LetterY();
  
  turnAllOff();
  delay(2000);
  LetterZ();
  

}

///=============/// FUNKTIONEN BEREICH ///=============///
void turnColumnsOff()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 1);
  }
}

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

///=============/// BUCHSTABEN BEREICH ///=============///

void LetterA()
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
      digitalWrite(column[13], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[0], 0);
      digitalWrite(column[1], 0);
      delay(x);
    }
  }
}

void LetterB()
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
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterC()
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
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterD()
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
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[9], 0);
      delay(x);
    }
  }
}

void LetterE()
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
      digitalWrite(column[11], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterF()
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
      digitalWrite(column[8], 0);
      digitalWrite(column[4], 0);
      delay(x);
    }
  }
}

void LetterG()
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
      digitalWrite(column[2], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterH()
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
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[8], 0);
      delay(x);
    }
  }
}


void LetterI()
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

void LetterJ()
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
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[13], 0);
      delay(x);
    }
  }
}

void LetterK()
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

void LetterL()
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
void LetterM()
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
      digitalWrite(column[3], 0);
      digitalWrite(column[15], 0);
      digitalWrite(column[14], 0);
      digitalWrite(column[0], 0);
      digitalWrite(column[1], 0);
      delay(x);
    }
  }
}
void LetterN()
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

void LetterO()
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

void LetterP()
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


void LetterQ()
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
      delay(x);
    }
  }
}

void LetterR()
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
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterS()
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
      digitalWrite(column[2], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[13], 0);
      delay(x);
    }
  }
}

void LetterT()
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
      digitalWrite(column[10], 0);
      digitalWrite(column[2], 0);
      delay(x);
    }
  }
}

void LetterU()
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
      digitalWrite(column[9], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}
void LetterV()
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
      digitalWrite(column[9], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      delay(x);
    }
  }
}
void LetterW()
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
      digitalWrite(column[8], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[1], 0);
      digitalWrite(column[0], 0);
      digitalWrite(column[14], 0);
      digitalWrite(column[15], 0);
      delay(x);
    }
  }
}

void LetterX()
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
      digitalWrite(column[6], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}

void LetterY()
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
      digitalWrite(column[6], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      delay(x);
    }
  }
}

void LetterZ()
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
      digitalWrite(column[7], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[5], 0);
      delay(x);
    }
  }
}
