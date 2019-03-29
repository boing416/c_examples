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
	//int a = 5;
	//int *ptr = &a;

	
	//a = 3;
	//calc(&a);
	
	//printf("address: %p",ptr);
	//ptr = &a;
	//ft_putaddr(ptr);
	
	int	a;
	int	b;
	int *ptr;
	a = 3;
	b = 42;
	ptr = &b;
	ft_putaddr(ptr);
	ft_putchar('\n');
	ft_putaddr(ptr + 1);
	ft_putchar('\n');
	ft_putaddr(ptr + 2);
	ft_putchar(' ');
	ft_putnbr(*(ptr + 1));
	ft_putchar('\n');
	
	// char a;
	// char b;
	// char *ptr;

	// a = '3';
	// b = 'o';
	// ptr = &b;
	// ft_putaddr(&b);
	// ft_putchar('\n');
	// ft_putaddr(ptr + 1);
	// ft_putchar('\n');
	// ft_putaddr(ptr + 2);
	// ft_putchar('\n');
	// ft_putnbr(*(ptr + 1));
	// ft_putchar('\n');

	
	return 0;
}

/*
0x7ffee3f49b04
0x7ffee3f49b08
0x7ffee3f49b0c 3
*/
