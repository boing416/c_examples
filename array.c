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
	tab[0] = 42;
	ft_putaddr(&tab);
	ft_putchar(' ');
	ft_putnbr(tab[0]);
	ft_putchar('\n');   

	
	return 0; 
}
