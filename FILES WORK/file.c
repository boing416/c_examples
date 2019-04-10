/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 09:26:09 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 12:51:22 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "header.h"
#include <unistd.h>

//#define BUF_SIZE 4096
#define BUF_SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	dft_putnbr(int nb)
{
	char	c1;
	int		inter;
	int		nb_save;
	int		temp;

	nb_save = nb;
	inter = 1;
	while (nb / 10 > 0)
	{
		inter *= 10;
		nb = nb / 10;
	}
	nb = nb_save;
	while (inter > 0)
	{
		temp = nb / inter;
		c1 = (nb / inter) + '0';
		ft_putchar(c1);
		nb = nb % inter;
		inter = inter / 10;
	}
    
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb == 2147483647)
	{
		ft_putchar('2');
		nb = 147483647;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb / 10 >= 1)
		dft_putnbr(nb);
	else
		ft_putchar(nb + '0');

}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
void ft_putchar_file(int fd, char c)
{
	write(fd, &c, 1);	
}
void ft_putstr_file(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}
int main()
{
	int fd;
											/*     WRITE      */
	//fd = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);  //REWRITE FLAGS
	fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR); //write to append
	if(fd == -1)
	{
		ft_putstr("OPEN() failed\n");
		return (1);
	}	
	//ft_putnbr(fd);
	ft_putchar_file(fd, 'Z');
	ft_putstr_file(fd, "MURAT");
	if(close(fd))
	{
		ft_putstr("CLOSE() failed\n");
		return (1);
	}

											/*     READ      */
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open("42", O_RDONLY);   //READ
	if(fd == -1)
	{
		ft_putstr("OPEN() failed\n");
		return (1);
	}	
	while((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0'; 
		ft_putnbr(ret);
		ft_putstr(buf);  
		ft_putchar('\n'); 
	}
	
	//ret = read(fd, buf, BUF_SIZE); 	
	//buf[ret] = '\0'; 
	ft_putnbr(ret);
	//ft_putchar('\n');
	//ft_putstr(buf); 
	if(close(fd) == -1)
	{
		ft_putstr("CLOSE() failed\n"); 
		return (1);
	}


	return (0);
}
