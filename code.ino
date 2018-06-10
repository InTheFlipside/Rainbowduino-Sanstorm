
int h; 
unsigned int z,x,y;
unsigned int c; 

#include <Rainbowduino.h>

void setup()
{
  Rb.init(); //initialize Rainbowduino driver
}

void loop()
{

////////////////////Sandstorm ///////////////
  for(y=0;y<4;y++)
  {
       delay(20);
    for(x=0;x<4;x++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xcc3300); //RED 
      }
    }
  }  
  

   for(z=0;z<4;z++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(x=0;x<4;x++) {
     Rb.setPixelZXY(z,x,y,0x663300); // 
      }
    }
  }  



   for(x=0;x<4;x++)
  {
       delay(20);
    for(z=0;z<4;z++)
    {
      delay(20);
      for(y=0;y<4;y++) {
     Rb.setPixelZXY(z,x,y,0xff5500); // 
      }
    }
  }
  
 }
