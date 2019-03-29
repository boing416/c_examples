#include<unistd.h>
#include<stdio.h>
void 	ft_putchar(char ptr)
{
	printf("%c",ptr);
}
void 	ft_putnbr(int ptr)
{
	printf("%d",ptr);
}
void	ft_putaddr(void *ptr)
{
	//write(1,&*ptr,1);
	printf("%p",ptr);
}

int		main(void)
{
	int	tab[10];
	int tab2[10];
	int *tabptr[2];
	int *ptr;

	//tab[0] = 42;
	tabptr[0] = tab;
	tabptr[1] = tab2;

	//tabptr[1][3] = 42;
	*(tabptr[1] + 3) = 42; //same
	*(*(tabptr + 1) + 3) = 42;

	//ptr = tab;
	//*(ptr + 3) = 345;
	
	//ft_putaddr(tab);
	//ft_putchar(' ');
	ft_putnbr(tab2[3]);
	ft_putchar('\n');


	// ft_putaddr(&tab);
	// ft_putchar(' ');
	// ft_putchar('\n'); 
	// ft_putnbr(tab[0]);
	// ft_putchar('\n');   
	// ft_putnbr(tab[3]);
	// ft_putchar('\n');   

	
	return 0; 
}
