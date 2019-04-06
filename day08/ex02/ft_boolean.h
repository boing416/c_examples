/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 08:12:25 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/06 08:26:30 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTB
# define FTB

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "ARGC HAVE 1"
#define ODD_MSG "ARGC NOT HAVE 1"
#define SUCCESS 0
#define EVEN(x) ((x) % 2)

typedef int t_bool;

#include <unistd.h>

#endif
