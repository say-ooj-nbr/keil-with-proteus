//SWITCH
#include<LPC214X.h>
void delay(unsigned int count);
int main(){
	IODIR0|=(1<<0);//set direction as output
IODIR0|=(1<<1);
IODIR0|=(1<<2);
IODIR0|=(1<<3);
IODIR0|=(1<<4);
IODIR0|=(1<<5);
IODIR0|=(1<<6);
IODIR0|=(1<<7);//set direction as output
IODIR0|=(1<<8);
IODIR0|=(1<<9);
IODIR0|=(1<<10);
IODIR0|=(1<<11);
IODIR0|=(1<<12);
IODIR0|=(1<<13);
while(1)
	{



IOSET0|=(1<<1)|(1<<2)|(1<<0)|(1<<3)|(1<<4)|(1<<5);
IOCLR0|=(1<<6);
		
IOSET0|=(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
IOCLR0|=(1<<13);
delay(200000);
		

IOSET0|=(1<<1)|(1<<2)|(1<<0)|(1<<3)|(1<<4)|(1<<5);
IOCLR0|=(1<<6);
	
IOSET0|=(1<<8)|(1<<9);
IOCLR0|=(1<<7)|(1<<10)|(1<<11)|(1<<12)|(1<<13);
delay(200000);
		
		
IOSET0|=(1<<1)|(1<<2);
IOCLR0|=(1<<0)|(1<<3)|(1<<4)|(1<<5)|(1<<6);

IOSET0|=(1<<7)|(1<<8)|(1<<9)|(1<<10)|(1<<11)|(1<<12);
IOCLR0|=(1<<13);
delay(200000);
		
		
IOSET0|=(1<<1)|(1<<2);
IOCLR0|=(1<<0)|(1<<3)|(1<<4)|(1<<5)|(1<<6);

IOSET0|=(1<<8)|(1<<9);
IOCLR0|=(1<<7)|(1<<10)|(1<<11)|(1<<12)|(1<<13);
delay(200000);

		
	}	
}
void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}