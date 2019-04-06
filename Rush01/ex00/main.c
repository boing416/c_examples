/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:04:12 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/06 11:53:02 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("%d\n",ac);
	if(ac == 10)
	{
		while(i < (ac - 1))
		{
			j = 0;
			while(j < (ac - 1))
			{

				write(1, "0", 1);
				write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}	
	}
	else
	{
		write(1, "ERROR\n", 6);	
	}
	return (0);

}
