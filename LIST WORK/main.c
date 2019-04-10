/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:26:24 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/09 11:35:56 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(void)
{
	t_list *list;

	list = NULL;

	list = add_link(link, "Murat\n");
	list = add_link(link, "Talgat\n");
	list = add_link(link, "Timur\n");

	print_list(list);

	return (0);
}
