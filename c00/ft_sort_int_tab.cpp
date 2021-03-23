#include <stdio.h>
#include <unistd.h>

ft_sort_int_tab(int *tab,int size)
{
	int i=0,j,min;
	
	while(i<size)
	{
		j=0;
		while(j<(size-1))
		{
			if(tab[j]>tab[j+1])
			{
				min=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=min;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab[]={9,8,3,2,1,5,4,6,7};
	ft_sort_int_tab(tab,9);
	for(int i=0;i<9;i++)
	{
		printf("%d",tab[i]);
	}
}
