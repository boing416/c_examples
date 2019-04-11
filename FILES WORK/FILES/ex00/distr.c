/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:36:56 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 14:17:24 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	file_reader(char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("OPEN() failed\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("CLOSE() failed\n");
		return (1);
	}
	return (0);
}
