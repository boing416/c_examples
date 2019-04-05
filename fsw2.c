/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:15:34 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/05 16:11:13 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_count_word(char *str, int s, int p)
{
	int		i;
	int		count;

	if (p == 1)
	{
		i = 0;
		count = 0;
		while (str[i] != '\0')
		{
			if ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
					&& (str[i - 1] != '\t' && str[i - 1]
					!= ' ' && str[i - 1] != '\n'))
				count++;
			i++;
		}
		if (str[i] == '\0')
			count++;
		return (count);
	}
	else
	{
		if (str[s] != '\t' && str[s] != ' ' && str[s] != '\n')
			return (1);
		return (0);
	}
}

int		get_count_l(char *str, int nb_word)
{
	int		i;
	int		count;
	int		count_l;
	char	bef;
	char	c;

	i = 0;
	count = 0;
	count_l = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		bef = str[i - 1];
		if ((c == '\t' || c == ' ' || c == '\n')
				&& (bef != '\t' && bef != ' ' && bef != '\n'))
			count++;
		else if (nb_word == count && ((c != '\t' && c != ' ' && c != '\n')))
			count_l++;
		i++;
	}
	count_l++;
	return (count_l);
}

char	**get_memory(char **array_result, char *str, int count_word)
{
	int i;
	int count;

	i = 0;
	while (i < count_word)
	{
		count = get_count_l(str, i);
		array_result[i] = (char*)malloc(sizeof(char) * count);
		array_result[i][count - 1] = '\0';
		i++;
	}
	return (array_result);
}

char	**ft_split_whitespaces2(char *str, char **array_result, int i, int l)
{
	int f;
	int w;

	f = 2;
	w = 0;
	while (str[i] != '\0')
	{
		if (get_count_word(str, i, 2) == 1)
		{
			array_result[w][l] = str[i];
			l++;
			f = 1;
		}
		else if (f == 1 && array_result[w][l] == '\0')
		{
			l = 0;
			w++;
			f = 2;
		}
		i++;
	}
	array_result[++w] = NULL;
	return (array_result);
}

char	**ft_split_whitespaces(char *str)
{
	int		count_word;
	char	**array_result;
	int		i;
	int		l;

	i = 0;
	l = 0;
	count_word = get_count_word(str, 1, 1);
	if ((array_result = malloc(sizeof(char *) * (count_word + 1))) == NULL)
		return (NULL);
	array_result = get_memory(array_result, str, count_word);
	return (ft_split_whitespaces2(str, array_result, i, l));
}
