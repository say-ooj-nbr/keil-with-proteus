//lED
#include<LPC214X.h>
#include<stdio.h>
void delay(unsigned int count);

int main()
{ 
	int i,j,k;
	for(k=1;k<=8;k++)
	{
	 IODIR0 |=(1<<k);
	}
	
for(i=1;i<9;i++)
	{

		for(j=1;j<=i;j++)
		{
		  IOSET0 |=(1<<j);
		  delay(200000);
		}
		for(j=1;j<=8;j++)
		{
		  IOCLR0 |=(1<<j);
		}
		  delay(200000);
		}
		

	
 while(1)
{
	for(j=1;j<=8;j++)
		{
		  IOCLR0 |=(1<<j);
		}
}
}
void delay (unsigned int count)
{
	unsigned int i;
	for (i=0;i<count;i++);
}