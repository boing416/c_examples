/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:03:22 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 09:14:51 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *node;

	if (ac < 1)
		return (NULL);
	if ((head = ft_create_elem(av[--ac])) == NULL)
		return (NULL);
	node = head;
	while (ac > 0 && (node->next = ft_create_elem(av[--ac])) != NULL)
		node = node->next;
	return (head);
}
