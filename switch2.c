//SWITCH
#include<LPC214X.h>

int main()
{
	IODIR1&=(~(1<<16));
		IODIR0|=(1<<7);
		IODIR1&=(~(1<<17));
		IODIR0|=(1<<8);
	while(1)
	{
		
		if((1<<16)&IOPIN1)
		{
			
			IOSET0|=(1<<7);
		}
		else
		{
			IOCLR0|=(1<<7);
			
		}
		if((1<<17)&IOPIN1)
		{
			IOSET0|=(1<<8);
		}
		else
		{
			
			IOCLR0|=(1<<8);
		}
	}
} 