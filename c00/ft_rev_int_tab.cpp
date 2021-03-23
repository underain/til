#include <stdio.h>
#include <unistd.h>

ft_rev_int_tab(int *tab, int size)
{
	int i=0,j;
	
	while(i<=size/2)
	{
		j=tab[i];
		tab[i]=tab[size-1-i];
		tab[size-1-i]=j;
		i++;
	}
}
int main(void)
{
	int tab[] = {1,2,3,4,5,6};
	ft_rev_int_tab(tab,6);
	for(int i=0;i<6;i++)
		printf("%d",tab[i]);
}
