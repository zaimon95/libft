/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:14:15 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/22 15:14:15 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

int		isset(char c, char *s)
{
	size_t	i;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && isset(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && isset(s1[j], set))
		j--;
	return (ft_substr(s1, i, (j - i + 1);
}
