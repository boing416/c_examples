/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:21:36 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/10 09:15:34 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *sec_tmp;

	if (!*begin_list)
		return ;
	tmp = *begin_list;
	while (tmp)
	{
		sec_tmp = tmp;
		free(tmp);
		tmp = sec_tmp->next;
	}
	*begin_list = 0;
}
