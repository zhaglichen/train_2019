#include "reg51.h"

#define led P0
int lastled=0xfe;
int flicker=0;

void delay(int t)
{
 int i, j;
 for(i = t; i > 0; i--)
 for(j = 1000; j > 0; j--);
}

void keycontrol()
{
	if(P2!=0xff)
	{
		delay(1);
		if(P2!=0xff)
		{
			switch(P2)
			{
				case(0xfe):
					if(lastled!=0xfe)
					{
						lastled=~(~(lastled)>>1);
					}
					break;
				case(0xfb):
					if(lastled!=0x7f)
					{
						lastled=~(~(lastled)<<1);
					}
					break;
				case(0xfd):
							flicker=~flicker;
              break;	
			}
		}
	}
}

int main()
{
	P2=0xff;
	while(1)
	{
		led=lastled;
		keycontrol();
		delay(50);
		if(flicker!=0)
		{
			led=0xff;
			delay(50);
		}
	}
}