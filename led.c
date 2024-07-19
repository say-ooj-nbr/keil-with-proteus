//lED
#include<LPC214X.h>
#include<stdio.h>
void delay(unsigned int count);

int main()
{ 
	int j=0;
	IODIR0 |=(1<<2);
	IODIR0 |=(1<<3);
	IODIR0 |=(1<<1);
	while(j<5)
	{
		IOSET0 |=(1<<2);
		delay(200000);
		IOCLR0 |=(1<<2);
		IOSET0 |=(1<<3);
		delay(200000);
		IOCLR0 |=(1<<3);
		IOSET0 |=(1<<1);
		delay(200000);
		IOCLR0 |=(1<<1);
		j++;
	}
	
 while(1)
{
	IOCLR0 |=(1<<2);
	IOCLR0 |=(1<<3);
	IOCLR0 |=(1<<1);
}
}
void delay (unsigned int count)
{
	unsigned int i;
	for (i=0;i<count;i++);
}