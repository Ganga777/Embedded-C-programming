// EXP-10: HELLO WORLD MESSAGE
// @Author B. GANGA BHAVANI GOUD,192212041
#include <reg51.h>
#include <stdio.h>
void main(void)
{
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TR1 = 1;
	TI = 1;
	while(1)
	{
		printf("Hello World !\n");
	}
}
