/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stok_par.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 09:34:26 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/06 09:42:26 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FS
#define FS

typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}			t_stock_par;	

#endif
