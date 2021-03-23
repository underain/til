#include <stdio.h>

void ft_print_negative(int n)
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
int main()
{
	int n=0;
	n = getchar();
	ft_print_negative(n);
}
