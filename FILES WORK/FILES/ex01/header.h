/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:23:09 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 15:07:57 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_
# define _FT_

# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 30

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		file_reader(char **av);

#endif
