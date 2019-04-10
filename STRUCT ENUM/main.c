/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 08:25:03 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/05 09:12:33 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file1.h"
#include "fct.h"
#define MURAT(x) int x;
#define TOHA(x) #x

int main()
{
	MURAT(a)
	char *str;
	str = TOHA(a);
	write(1, str, 1);
	return (0);
}
