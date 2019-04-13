/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 10:22:32 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/11 13:24:30 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*b_item;

	if (b_item = malloc(sizeof(t_btree)))
	{
		b_item->data = item;
		b_item->left = 0;
		b_item->right = 0;
		return (b_item);
	}
	else
		return (NULL);
}
