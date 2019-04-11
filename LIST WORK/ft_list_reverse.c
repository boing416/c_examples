/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:56:44 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/09 21:12:27 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *el_p;
	t_list *el_n;
	t_list *el_c;

	el_p = 0;
	el_n = 0;
	el_c = *begin_list;
	while (el_c)
	{
		el_n = el_c->next;
		el_c->next = el_p;
		el_p = el_c;
		el_c = el_n;
	}
	*begin_list = el_p;
}
