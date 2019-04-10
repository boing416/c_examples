/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:06:02 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/05 10:43:54 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "tools.h"
#include "stdio.h"

struct s_test
{
	int i;
	char c;
	float f;
	char tab[4];
};

union u_test
{
	int i;
	char c;
	float f;
	char tab[4];

};

int main(void)
{
	union u_test a;
	a.i = 234234;
	//ft_putnbr(10);
	printf("I: %d\n",a.i);

	printf("TAB: %d\n",a.tab[0]);
	return (0);
}
