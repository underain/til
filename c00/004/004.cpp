#include <stdio.h>

void ft_is_negative(int n)
{
	char number;
	
	if(n >= 0)
	{
		number = 'P';
		write(1, &number, 1);		
	}
	else if(n < 0)
	{
		number = 'N';
		write(1, &number, 1);		
	}
}

int main(void)
{
	int i;
	printf("정수를 입력하세요:");
	i = getchar();
	putchar(i);
	printf("\n");
	ft_is_negative(i);	
}

