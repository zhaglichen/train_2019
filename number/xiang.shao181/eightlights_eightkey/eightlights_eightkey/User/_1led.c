#include<reg51.h>     //反应时间巨慢

#define key P2
sbit led0=P0^0;
sbit led1=P0^1;
sbit led2=P0^2;
sbit led3=P0^3;
sbit led4=P0^4;
sbit led5=P0^5;
sbit led6=P0^6;
sbit led7=P0^7;
void delay(int l)       
{
	int k,j;
	for(j=l;j>0;j--)
	for(k=1000;k>0;k--);
}

int main()
{
	int i=0;
	P0=0xff;
	P2=0xff;
	while(1)
	{
		if(P2!=0xff)
		{
			delay(1);
			if(P2!=0xff)
			{
		     switch(P2)
		     {
			     case(0xfe):led0=~led0;break;
			     case(0xfd):led1=~led1;break;
			     case(0xfb):led2=~led2;break;
		     	 case(0xf7):led3=~led3;break;
			     case(0xef):led4=~led4;break;
			     case(0xdf):led5=~led5;break;
			     case(0xbf):led6=~led6;break;
			     case(0x7f):led7=~led7;break;
				 }
				 while(i<=20&&P2!=0xff)    //松手测试
				 {
					 delay(1);
					 i++;
				 }
	   	}
		}
	}
}