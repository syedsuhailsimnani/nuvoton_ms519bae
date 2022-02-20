//  File Function: MS51 GPIO toggle demo code
//***********************************************************************************************************
#include "MS51_16K.H"
#include "Function_Define_MS51_16K.h"

//----------------------------------------------------------------------------------------------//
void main (void)
{
  long i;
  P12_PUSHPULL_MODE;

  while(1)
  {
    P12 = 0;
		for(i=0;i<10;i++)
    {
    _delay_();
    }
    P12=1;
    for(i=0;i<10;i++)
    {
    _delay_();
    }

  }
}



