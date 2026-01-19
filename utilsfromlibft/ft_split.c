/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:49:33 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:44:35 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(const char *str, char delimit)
{
	int	words;
	int	i;
	int	flag;

	flag = 0;
	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != delimit && flag == 0)
		{
			words++;
			flag = 1;
		}
		if (str[i] == delimit && flag == 1)
			flag = 0;
		i++;
	}
	return (words);
}

static void	*ft_split_clear(char **array, int pos)
{
	int	z;

	z = 0;
	while (array[z] && z < pos)
	{
		free(array[z]);
		z++;
	}
	free(array);
	return (NULL);
}

static int	count_len_w(char c, char const *s, int *i)
{
	int	w_count;

	w_count = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		w_count++;
		(*i)++;
	}
	return (w_count);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;
	int		i;
	int		w_count;
	int		j;

	words = count_words(s, c);
	array = malloc(sizeof (char *) * (words + 1));
	if (!array)
		return (NULL);
	array[words] = NULL;
	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		w_count = count_len_w(c, s, &i);
		array[j] = ft_substr(s, i - w_count, w_count);
		if (!array[j])
			return (ft_split_clear(array, j));
		i++;
		j++;
	}
	return (array);
}

// int	main(void)
// {
// 	const char *s = "hola,mario,virginia,ayua,me";
// 	char **result = ft_split(s, ',');
// 	printf("se consigue volver de split.\n");
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i ++;
// 	}
// 	ft_split_clear(result, 5);
// 	// while (result[i])
// 	// {
// 	// 	free(result[i]);
// 	// 	i ++;
// 	// }
// 	free(result);
// 	return (0);
// }