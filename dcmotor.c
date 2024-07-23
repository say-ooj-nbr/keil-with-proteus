#include<LPC214X.h>
void delay(unsigned int count);
int main()
{
		IODIR1&=(~(1<<16));
		IODIR0|=(1<<13);
		
	while(1)
	{
	
		if((1<<16)&IOPIN1)
		{
			IOCLR0|=(1<<13);
			
		}
		else
		{
			IOSET0|=(1<<13);
			
		}
		delay(200000);
		
	}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}