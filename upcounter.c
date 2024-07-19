#include <LPC214X.h>
void delay(unsigned int count);
int main() {

IODIR0 |= (1<< 4);  // Set P0.10 as output
IODIR0 |= (1<< 5);
IODIR0 |= (1<< 6);
while (1){
        IOSET0 |= (1 << 4);
				delay(500000);
        IOCLR0 |= (1 << 4);
				IOSET0 |= (1 << 5);
				delay(500000);
        IOCLR0 |= (1 << 5);
	      IOSET0 |= (1 << 6);
				delay(500000);
        IOCLR0 |= (1 << 6);
    }
}
void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}




#include <LPC214X.h>
void delay(unsigned int count);
int main() {
int i=0;
IODIR0 |= (1<< 4);  // Set P0.10 as output
IODIR0 |= (1<< 5);
IODIR0 |= (1<< 6);
while(i==0){
  //000
	IOCLR0 |= (1 << 4);      
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	delay(500000);
	IOCLR0 |= (1 << 4);      
	IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	delay(500000);
	IOCLR0 |= (1 << 4);      
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	delay(500000);
	IOCLR0 |= (1 << 4);      
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	delay(500000);
	IOSET0 |= (1 << 4);      
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	delay(500000);
	IOSET0 |= (1 << 4);      
	IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	delay(500000);
	IOSET0 |= (1 << 4);      
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	delay(500000);
	IOSET0 |= (1 << 4);      
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	delay(500000);
	i++;
}
while(1){
		IOCLR0 |= (1 << 4);      
		IOCLR0 |= (1 << 5);
		IOCLR0 |= (1 << 6);
    }
}

void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}
