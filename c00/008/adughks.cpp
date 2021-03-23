#include <stdio.h>

int main(void)
{
	unsigned char a = 0xcd;
	unsigned char b = 0xf0;
	unsigned char c;
	
	c= a^b;
	printf("z = %02x\n",c);
	
	c=~a|b<<2;
	printf("z = %02x\n",c);
}
