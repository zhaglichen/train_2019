#include <reg51.h>
#include <intrins.h>
sbit led=P1^0;
void main()
{int a=0x01;
	long b;
void delay();
while(1)
{
P1=a;
a=_cror_(a,1);
delay();
}
}
void delay()
{
unsigned int i;
	for(i=1;i<300;i++);
}
