#include <unistd.h>

ft_print_comb(void)
{
	char a[4];
	
	a[0]='0';

	
	while(a[0] <= '6')
	{
		a[1] = a[0] + 1;
		while(a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while(a[2] <= '9')
			{
				write(1, a, 4);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}

int main(void)
{
	ft_print_comb();
	write(1, "789", 3);
}
