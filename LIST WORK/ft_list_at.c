/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:38:05 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/09 20:53:09 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;

	i = 0;
	while (begin_list)
	{
		if (nbr == i)
			return (begin_list);
		i++;
		begin_list = begin_list->next;
	}
	return (0);
}
