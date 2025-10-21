/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:49:52 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/21 07:49:52 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *)malloc (len * sizeof(char));
	if(!str)
		return (NULL);
	while (i < start)
		i++;
	j = 0;
	while (j++ <= len || s[i++])
	{
		str[j] = s[i];
	}
	return (str);
}
