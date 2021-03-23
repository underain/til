#include <stdio.h>

void ft_print_alphabet(void)
{
	char c;
	c = 'a';
	while(c >= 'a')
	{
		write(1, &c, 1);
		c--;	
	}
}
int main()
{
	ft_print_alphabet();
	return 0;
}
