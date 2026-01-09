/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:29:11 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:57:31 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (start >= ft_strlen(s))
		return (malloc((sizeof(char)) * 1));  //CAMBIAR POR MALLOC
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc((sizeof(char)) * len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// 3
// 1

// "ola"

// int main(void)
// {
// 	char	*willy = ft_substr("lorem ipsum dolor", 7, 50);
// 	printf("%s\n", willy);
// 	free(willy);
// 	return (0);
// }