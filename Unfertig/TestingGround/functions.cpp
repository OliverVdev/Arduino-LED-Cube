// Startup values
//initializing and declaring led rows
    int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4};
//initializing and declaring led layers
    int layer[4]={A3,A2,A1,A0};

int time = 250;
int x;
int y;
int Lay;
int Col;
int Col1;
int Lay1;
int x1;
int y1;
#include <math>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

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
void loop() {
    turnEverythingOff();
    TurnOn(10, 2);
}

void TurnOn(int Col1, int Lay1){

    x1 = CalToX(Col1); // Gets Col value as a cord 

    y1 = LayToY(Lay1); // Gets Lay value as  a cord
    
    digitalWrite(layer[y1], 1);

    digitalWrite(column[x1], 0);
}
int LayToY(int Lay) // Function to translate Layer to Y
{
    if(Lay == 1){y = 3}
    else if(Lay == 2)
    {y = 2;}
    else if(Lay == 3)
    {y = 1;}
    else if(Lay == 4)
    {y=0;}
    else
    {break;}
    return y; // returns the Layer as Y value
}
int CalToX(int Col) // Function to translate Col to X
{
    if(Col == 1)
        {x = 10;}
    else if(Col == 2)
        {x = 7;}
    else if(Col == 3)
        {x = 2;}
    else if(Col == 4)
        {x = 15;}
    // Col 5
    else if(Col == 5)
        {x = 11;}
    // Col 6
    else if(Col == 6)
        {x = 6;}
    // Col 7
    else if(Col == 7)
        {x = 3;}
    // Col 8
        else if(Col == 8)
    {x = 14;}
    // Col 9
        else if(Col == 9)
    {x = 12;}
    // Col 10
        else if(Col == 10)
    {x = 8;}
    // Col 11
        else if(Col == 11)
    {x = 4;}
    // Col 12
        else if(Col == 12)
    {x = 0;}
    // Col 13
        else if(Col == 13)
    {x = 13;}
    // Col 14
        else if(Col == 14)
    {x = 9;}
    // Col 15
        else if(Col == 15)
    {x = 5;}
    // Col 16
        else if(Col == 16)
    {x = 1;}
    else 
        {return 0;}
return x;
}

///////////////////////////////////////////////////////////turn all off
void turnEverythingOff()
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