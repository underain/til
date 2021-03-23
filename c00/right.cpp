#include <stdio.h>
#include <unistd.h>

buf1(int a)
{
	write(1,&a,1);
}

int main(void)
{
	write(1,48,1);
}
