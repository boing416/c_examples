/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:16:14 by mnurkass          #+#    #+#             */
/*   Updated: 2019/03/29 09:54:56 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_iterative_factorial	(int nb)
{
	if(nb == 1)
    	return 1;
  	else if(nb == 0)
    	return 1;
    return nb * ft(nb - 1); 
}

int main	(int argc, char *argv[])
{
	int result = ft(5);

	printf("%d\n",result);
	
	return (0);
}	
