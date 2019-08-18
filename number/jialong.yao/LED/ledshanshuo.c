#include<reg51.h>
sbit led=P1^0;
void delay(int x);
int main()
{
	while(1)
	{
		led=0;
		delay(1000);
		led=1;
		delay(1000);
	}
	return 0;
}
void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++)
	for(j=0;j<120;j++);
}