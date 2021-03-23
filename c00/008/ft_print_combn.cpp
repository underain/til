#include <stdio.h>
#include <unistd.h>

ft_putstr(char *str)
{
	char i;
	
	while(1)
	{
		i = *str;
		if(i=='\0')
		{
			break;
		}
		else
		{
			write(1,&i,1);
			str++;
		}
	}
}
int main(void)
{
	char str[] = "asdfg";
	ft_putstr(str);
}
