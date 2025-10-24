/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:23:26 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/24 14:23:26 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *str, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*ft_strndup(char const *str, size_t len)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	int		j;
	size_t	start;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	strs = malloc(sizeof(char *) * ((ft_wordcount(s, c) + 1)));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			strs[j++] = ft_strndup(s + start, i - start);
	}
	strs[j] = NULL;
	return (strs);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Make sure this includes your ft_split prototype

void	print_split(char **split)
{
	int	i = 0;

	if (!split)
	{
		printf("Split returned NULL\n");
		return;
	}
	while (split[i])
	{
		printf("str[%d] = \"%s\"\n", i, split[i]);
		i++;
	}
	printf("Total: %d strings\n", i);
}

int	main(void)
{
	char **result;

	printf("=== Test 1 ===\n");
	result = ft_split("hello world this is 42", ' ');
	print_split(result);
	
	// Free memory
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);

	printf("\n=== Test 2 ===\n");
	result = ft_split(",,,split,,,this,,,string,,,", ',');
	print_split(result);
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);

	printf("\n=== Test 3 ===\n");
	result = ft_split("", ' ');
	print_split(result);
	if (result)
	{
		for (int i = 0; result[i]; i++)
			free(result[i]);
		free(result);
	}

	printf("\n=== Test 4 ===\n");
	result = ft_split("no_delimiters_here", ',');
	print_split(result);
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);

	printf("\n=== Test 5 ===\n");
	result = ft_split(NULL, ' ');
	print_split(result);

	return (0);
}*/
