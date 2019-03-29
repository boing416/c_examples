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
	char *ptr;

	ptr = "Murat";

	ft_putchar(*ptr);
	ft_putchar('\n');
	ft_putchar(ptr[0]);
	ft_putchar('\n');

	
	return 0; 
}
