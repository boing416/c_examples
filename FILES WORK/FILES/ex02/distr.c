/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:36:56 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 20:04:39 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_error(char *av)
{
	ft_putstr("ft_cat: ");
	ft_putstr(av);
	ft_putstr(": No such file or directory");
}

void	p_tail(char *buf, int i, char **av)
{
	int	fd;
	int	ret;
	int	count;
	int	total;

	total = 0;
	fd = open(av[i], O_RDONLY);
	count = 1;
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		count++;
	}
	close(fd);
	fd = open(av[i], O_RDONLY);
	total = count - ft_atoi(av[2]);
	count = 1;
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		if ((total - 1) < count)
			ft_putstr(buf);
		count++;
	}
	close(fd);
}

int		file_reader(int ac, char **av)
{
	char	buf[(ft_atoi(av[2])) + 1];
	int		i;

	i = 3;
	while (i < ac)
	{
		p_tail(buf, i, av);
		i++;
	}
	return (0);
}
