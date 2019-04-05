/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces_orig.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:15:34 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/04 17:25:50 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_symbol(char *str, int i)
{
	char c;

	c = str[i];
	if (c != '\t' && c != ' ' && c != '\n')
		return 1;
	return 0;
}

int	get_count_word(char *str)
{
	int i;
	int count;
	char bef;
	char c;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		bef = str[i - 1];
		if ((c == '\t' || c == ' ' || c == '\n')
				&& (bef != '\t' && bef != ' ' && bef != '\n'))
			count++;
		i++;
	}
	if (str[i] == '\0')
		count++;
	return count;
}

int get_count_l(char *str, int nb_word)
{
	int i;
	int count;
	int count_l;
	char bef;
	char c;

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
	while (i < count_word) {
		count = get_count_l(str, i);
		array_result[i] = (char*)malloc(sizeof(char) * count);
		array_result[i][count - 1] = '\0';
		i++;
	}
	return (array_result);
}

char	**ft_split_whitespaces(char *str)
{
	int count_word;
	char **array_result;
	int i;
	int l;
	int w;
	int f;
	char c;

	i = 0;
	l = 0;
	w = 0;
	f = 2;
	count_word = get_count_word(str);
	array_result = (char**)malloc(sizeof(char *) * (count_word + 1));
	array_result = get_memory(array_result, str, count_word);
	while (str[i] != '\0')
	{
		c = str[i];
		if (check_symbol(str, i) == 1)
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
	w++;
	array_result[w] = '\0';
	return (array_result);
}
