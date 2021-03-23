#include <stdio.h>
#include <unistd.h>

// int값 -2,147,483,648 ~ 2,147,483,647

ft_putnbr(int number)
{
	int a = number;
	int i=0;
	while(number>0)
	{
		i++;
		number /= 10;
	}
	
	write(1,&a,i); //아스키코드로 나오는 문제 고쳐보기 
}

int main(void)
{
	ft_putnbr(123);
}
