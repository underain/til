#include <unistd.h>

ft_print_comb2(void)
{
	char a[7];
	
	a[0]='0';
	a[1]='0';
	a[2]='0';
	a[3]='1';

	while(a[0] <= '9')
	{
		while(a[1] <= '9')
		{
			while(a[2] <= '9')
			{
				while(a[3] <= '9')
				{
					write(1,a,5);
					
					a[3]++;
				}
				a[2]++;
			}
			a[1]++;
		}
		a[2]++;
	}
}
int main(void)
{
	ft_print_comb2();
}
