#include <stdio.h>

void ft_print_numbers(int c)
{
	while(c <= 9)
	{
		write(1, &c, 1);
		c++;	
	}
}
int main()
{
	int c;
	ft_print_numbers();
	return 0;
}
