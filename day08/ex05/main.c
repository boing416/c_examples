/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 08:49:22 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/06 10:41:36 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct s_stock_par
{
    int size_param;
    char *str;
    char *copy;
    char **tab;
}            t_stock_par;

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par *obj;
	int i;
	int j;

	obj = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac - 1));
	i = 1;
	j = 0;	
	while (i < ac)
	{
		obj[i-1].size_param = ft_strlen(av[i]);
		obj[i-1].str = av[i];

		i++;
	}

	return (obj);
}

int main(int argc, char **argv)
{
	t_stock_par *test;

	if(argc > 1)
	{
		test = ft_param_to_tab(argc,argv);		
	
		ft_putstr("**********************PRINT OBJECTS***********************");
		ft_putchar('\n');	
		int i = 1;
		while (i < argc)
		{
			printf("*****OBJ #%d******\n",i);
			printf("SIZE PARAM:\t%d\n", test[i - 1].size_param);
			printf("STRING:\t%s\n", test[i - 1].str);
			i++;		
		}

	}

}
