#include<reg51.h>
#define uchar unsigned char 
#define uint unsigned int 
unsigned char table[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
void delay(void)
	{		
		uchar a,b;
		for(a=0;a<225;a++)
		for(b=0;b<225;b++);
	}
	void main()
		{
			uchar i;
			while(1)
				{
					for(i=0;i<8;i++)
					{
						P1=table[i];
						delay();
					}
				}
		}


