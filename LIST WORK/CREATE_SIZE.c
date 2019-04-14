/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:41:34 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/14 11:43:59 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../header.h"  

# include <fcntl.h>
# include <unistd.h> 
# include <stdlib.h>
# include <stdio.h>

typedef struct list_num
{
    struct list_num *next;
   	void           *data;
    // int             data;        
}               t_list; 

int	ft_list_size(t_list *begin_list)
{
	int n;
	int data;

	n = 0;
	while (begin_list)
	{
		
		begin_list = begin_list->next;	
		printf("%s\n", (char*)begin_list->data);
		// begin_list = begin_list->next;
		n++;
	}
	return (n);
}

t_list	*ft_create_element2(t_list *list, void *data)
{
	t_list	*tmp;
	t_list	*new;

	if (list == NULL)
	{
		new = (t_list *)malloc(sizeof(t_list *));
		new->data = (int*)data;
		new->next = NULL;
		return (new);
	}
	tmp = list;
	new = (t_list *)malloc(sizeof(t_list *));
	new->data = (int*)data;
	new->next = NULL;
	while (list->next)
		list = list->next;
	list->next = new;
	return (tmp);
}

int		main(int ac, char **av)
{
	int			i;
	int			x;
	t_list		*list;
	int v;

	i = 1;
	list = NULL;
	while (i < ac)
	{
		list = ft_create_element2(list, av[i]);
		i++;
	}

	x = ft_list_size(list);
	printf("%d\n", x);
	return (0);

}
