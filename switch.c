//SWITCH
#include<LPC214X.h>
int main()
{
	while(1)
	{
		IODIR1&=(~(1<<16));
		IODIR0|=(1<<7);
		if((1<<16)&IOPIN1)
		{
			IOCLR0|=(1<<7);
		}
		else
		{
			IOSET0|=(1<<7);
		}
	}
}
		