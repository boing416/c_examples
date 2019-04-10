/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:33:33 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/09 11:41:50 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if(tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}

	return tmp;	
}
