//SWITCH
#include<LPC214X.h>

int main()
{
		IODIR0|=(1<<3);
		IODIR0|=(1<<4);
		IODIR0|=(1<<5);
		IODIR0|=(1<<6);
	  IODIR0|=(1<<7);
		IODIR0|=(1<<8);
		IODIR0|=(1<<9);
	while(1)
	{
		IOSET0|=(1<<3);
		IOSET0|=(1<<5);
		IOSET0|=(1<<6);
		IOSET0|=(1<<7);
		IOSET0|=(1<<8);
		IOSET0|=(1<<9);
		
		
	}
} 