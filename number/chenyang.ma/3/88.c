#include <reg51.h>
sbit a=P2^0;
sbit b=P2^1;
sbit c=P2^2;
sbit d=P2^3;
sbit e=P2^4;
sbit f=P2^5;
sbit g=P2^6;
sbit h=P2^7;
sbit i=P0^0;
sbit j=P0^1;
sbit k=P0^2;
sbit l=P0^3;
sbit m=P0^4;
sbit n=P0^5;
sbit o=P0^6;
sbit p=P0^7;
int q;
int r;
int s;
int t;
int u;
int v;
int w;
int x;
int y;
int main()
{
  a=1;
	b=1;
	c=1;
	d=1;
	e=1;
	f=1;
	g=1;
	h=1;
	q=1;
	r=1;
	s=1;
	t=1;
	u=1;
	v=1;
	w=1;
	x=1;
	while(1)
	{

		if(a==0) q++;
		if(b==0) r++;
		if(c==0) s++;
		if(d==0) t++;
		if(e==0) u++;
		if(f==0) v++;
		if(g==0) w++;
		if(h==0) x++;
	i=q%2;
	j=r%2;
	k=s%2;
	l=t%2;
	m=u%2;
	n=v%2;
	o=w%2;
	p=x%2;
		for(y=0;y<500;y++);
		
	}
	return 0;
}