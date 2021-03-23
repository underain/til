#include <stdio.h>
#include <unistd.h>

ft_strlen(char *str)
{
	int i;
	
	while(1)
	{
		if(*str =='\0')
			break ;
			
		str++;
		i++;
	}
	return (i);
}
int main(void)
{
	char str[] = "sehwanjjang";
	printf("%d",ft_strlen(s));
}
