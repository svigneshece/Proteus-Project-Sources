#include<reg51.h>
void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<250;j++)
		{
		}
	}
	
}

void main()
{
	while(1)
	{
		P2=0x01;
		delay(1000);
		P2=0x00;
		delay(1000);
	}
}